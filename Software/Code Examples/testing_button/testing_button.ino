#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "BQ27441_Definitions.h"
#include "SparkFunBQ27441.h"

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   {                
  Serial.begin(115200);

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
  // init done
  display.clearDisplay();

  gpio_set_direction(GPIO_NUM_5, GPIO_MODE_INPUT);
  gpio_pulldown_en(GPIO_NUM_5);

  gpio_set_direction(GPIO_NUM_4, GPIO_MODE_INPUT);

  gpio_set_direction(GPIO_NUM_18, GPIO_MODE_OUTPUT);
  gpio_set_level(GPIO_NUM_18, 0);

  
  
  
//  // text display tests
//  display.setTextSize(1);
//  display.setTextColor(WHITE);
//  display.setCursor(0,0);
//  display.println("Hello, world!");
//  display.setTextColor(BLACK, WHITE); // 'inverted' text
//  display.println(3.141592);
//  display.setTextSize(2);
//  display.setTextColor(WHITE);
//  display.print("0x"); display.println(0xDEADBEEF, HEX);
//  display.display();
//  delay(2000);
//  display.clearDisplay();
}


void loop() {
  Serial.println(analogRead(GPIO_NUM_4));
  delay(100);
}
