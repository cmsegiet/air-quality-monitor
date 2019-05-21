#include "u8g2.h"

#define SSD1306_ADDR 0x3C

u8g2_t ssd1306_init(void);
void ssd1306_wakeup(u8g2_t *u8g2);
void ssd1306_sleep(u8g2_t *u8g2);
void ssd1306_clear(u8g2_t *u8g2);
void ssd1306_display(u8g2_t *u8g2);
void ssd1306_setfont(u8g2_t *u8g2, const uint8_t *font);
void ssd1306_drawstring(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);

