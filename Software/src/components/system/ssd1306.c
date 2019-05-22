#include <esp_log.h>
#include "pin_defs.h"
#include "u8g2_esp32_hal.h"
#include "ssd1306.h"


static const char *TAG = "ssd1306";

void ssd1306_init(u8g2_t u8g2) { 
    u8g2_esp32_hal_t u8g2_esp32_hal = U8G2_ESP32_HAL_DEFAULT;
    u8g2_esp32_hal.sda = I2C1_SDA;
    u8g2_esp32_hal.scl = I2C1_SCL;
    u8g2_esp32_hal_init(u8g2_esp32_hal);

    u8g2_Setup_ssd1306_i2c_128x64_noname_1(
        &u8g2,
        U8G2_R0,
        u8g2_esp32_i2c_byte_cb,
        u8g2_esp32_gpio_and_delay_cb
    );
    u8x8_SetI2CAddress(&u8g2.u8x8, SSD1306_ADDR << 1);

    ESP_LOGI(TAG, "u8g2_InitDisplay");
    u8g2_InitDisplay(&u8g2);
}