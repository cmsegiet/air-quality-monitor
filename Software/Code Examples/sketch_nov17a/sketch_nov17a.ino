#include "C:\msys32\home\Chris\esp\esp-idf\components\driver\include\driver\gpio.h"
#include "C:\msys32\home\Chris\esp\esp-idf\components\driver\include\driver\rtc_io.h"
#include "C:\msys32\home\Chris\esp\esp-idf\components\freertos\include\freertos\FreeRTOS.h"
#include "C:\msys32\home\Chris\esp\esp-idf\components\freertos\include\freertos\task.h"
#include "C:\msys32\home\Chris\esp\esp-idf\components\freertos\include\freertos\queue.h"

#define ESP_INTR_FLAG_DEFAULT 0

gpio_num_t relay1 = GPIO_NUM_17;
gpio_num_t relay2 = GPIO_NUM_5;
gpio_num_t up_button = GPIO_NUM_33;
gpio_num_t down_button = GPIO_NUM_2;
gpio_num_t stop_button = GPIO_NUM_4;

static xQueueHandle gpio_evt_queue = NULL;

int cnt = 0;

static void IRAM_ATTR gpio_isr_handler(void* arg)
{
    static unsigned long last_interrupt_time = 0;
    unsigned long interrupt_time = millis();
    uint32_t gpio_num = (uint32_t) arg;
    if(interrupt_time - last_interrupt_time > 200) {
      xQueueSendFromISR(gpio_evt_queue, &gpio_num, NULL);
    }
    last_interrupt_time = interrupt_time;
}

static void button_task(void* arg)
{
    uint32_t io_num;
    for(;;) {
        if(xQueueReceive(gpio_evt_queue, &io_num, portMAX_DELAY)) {
            if(io_num == 33) {           
              digitalWrite(relay1, HIGH);       
              digitalWrite(relay2, LOW);
              printf("GPIO[%d] intr, val: %d\n , Up button pressed", io_num, analogRead(io_num));
            }
            else if(io_num == 2) {
              digitalWrite(relay1, LOW);       
              digitalWrite(relay2, HIGH);
              printf("GPIO[%d] intr, val: %d\n , Down button pressed", io_num, analogRead(io_num));
            }
            else if(io_num == 4) { 
              digitalWrite(relay1, HIGH);       
              digitalWrite(relay2, HIGH);
              printf("GPIO[%d] intr, val: %d\n , Stop button pressed", io_num, analogRead(io_num));
            }
        }
    }
}
//static void down_button_task(void* arg)
//{
//    uint32_t io_num;
//    for(;;) {
//        if(xQueueReceive(gpio_evt_queue, &io_num, portMAX_DELAY)) {
//            gpio_set_level(relay1, 0);       
//            gpio_set_level(relay2, 1);
//            printf("GPIO[%d] intr, val: %d\n , Up button pressed", io_num, gpio_get_level((gpio_num_t)io_num));
//        }
//    }
//}
//static void stop_button_task(void* arg)
//{
//    uint32_t io_num;
//    for(;;) {
//        if(xQueueReceive(gpio_evt_queue, &io_num, portMAX_DELAY)) {
//            gpio_set_level(relay1, 1);       
//            gpio_set_level(relay2, 1);
//            printf("GPIO[%d] intr, val: %d\n , Up button pressed", io_num, gpio_get_level((gpio_num_t)io_num));
//        }
//    }
//}

void setup() {
  //Initializing needed pins as RTC GPIO pins because of a bug that does not allow pull-up/pull-down with regular GPIO pins
  rtc_gpio_init(up_button);
  rtc_gpio_init(down_button);
  rtc_gpio_init(stop_button);
//  rtc_gpio_init(relay1);
//  rtc_gpio_init(relay2);

  //Setting pin directions
  gpio_set_direction(relay1,GPIO_MODE_OUTPUT);
  gpio_set_direction(relay2,GPIO_MODE_OUTPUT);
  rtc_gpio_set_direction(up_button,RTC_GPIO_MODE_INPUT_ONLY);
  rtc_gpio_set_direction(down_button,RTC_GPIO_MODE_INPUT_ONLY);
  rtc_gpio_set_direction(stop_button,RTC_GPIO_MODE_INPUT_ONLY);

  //Internal pull-down configuration for buttons
  rtc_gpio_pulldown_en(up_button);
  rtc_gpio_pulldown_en(down_button);
  rtc_gpio_pulldown_en(stop_button);
  gpio_pulldown_en(relay1);
  gpio_pulldown_en(relay2);

  //Internal pull-down for outputs
  

  //Setting interrupt to trigger on positive edge of buttons
  gpio_set_intr_type(up_button, GPIO_INTR_POSEDGE);
  gpio_set_intr_type(down_button, GPIO_INTR_POSEDGE);
  gpio_set_intr_type(stop_button, GPIO_INTR_POSEDGE);

  //Create a queue to handle gpio event from Interrupt Service Routine (ISR)
  gpio_evt_queue = xQueueCreate(10, sizeof(uint32_t));

  //Start gpio task
  xTaskCreate(button_task, "button_task", 2048, NULL, 10, NULL);
  
  //Install GPIO ISR Service
  gpio_install_isr_service(ESP_INTR_FLAG_DEFAULT);

  //Hook ISR Handler for input buttons
  gpio_isr_handler_add(up_button, gpio_isr_handler, (void*) up_button);
  gpio_isr_handler_add(down_button, gpio_isr_handler, (void*) down_button);
  gpio_isr_handler_add(stop_button, gpio_isr_handler, (void*) stop_button);

  gpio_set_drive_capability(relay1,GPIO_DRIVE_CAP_3); 
  gpio_set_drive_capability(relay2,GPIO_DRIVE_CAP_3);

  gpio_set_level(relay1, 1);
  gpio_set_level(relay2, 1);
  
  Serial.begin(115200);
}

void loop() {
  printf("cnt: %d\n", cnt++);
  vTaskDelay(1000 / portTICK_RATE_MS);
  Serial.println(analogRead(relay1));
  Serial.println(analogRead(relay2));
  Serial.println(analogRead(up_button));
  Serial.println(analogRead(down_button));
  Serial.println(analogRead(stop_button));
}
