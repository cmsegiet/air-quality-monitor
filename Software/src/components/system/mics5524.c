#include "mics5524.h"
#include "driver/gpio.h"
#include "driver/adc.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

void mics5524_init(void) { 
    gpio_config_t mics5524_aout = {
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = GPIO_SEL_4,
        .intr_type = GPIO_INTR_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en =  GPIO_PULLUP_DISABLE
    };
    gpio_config(&mics5524_aout);

    gpio_config_t mics5524_en = {
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = GPIO_SEL_18,
        .intr_type = GPIO_INTR_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_ENABLE,
        .pull_up_en =  GPIO_PULLUP_DISABLE
    };
    gpio_config(&mics5524_en);

    adc2_config_channel_atten(ADC2_CHANNEL_0, ADC_ATTEN_11db);
}

void mics5524_enable(void) { 
    gpio_set_level(GPIO_NUM_18, 0);
}

void mics5524_disable(void) { 
    gpio_set_level(GPIO_NUM_18, 1);
}
void mics5524_read(int *sensorValue) { 
    adc2_get_raw(ADC2_CHANNEL_0, ADC_WIDTH_12Bit, sensorValue);
}

void mics5524_calibrate(void) {

}