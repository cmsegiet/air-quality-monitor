#define beer_width 65
#define beer_height 33

#define cms_width 81
#define cms_height 41
static unsigned char cms_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x2c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x48, 0x0e, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x58, 0x03, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0xff, 0xb8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0x71, 0xc6, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x7c, 0x30, 0x73, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x3f, 0x98, 0x11, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f,
   0xce, 0xcc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x63,
   0xce, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x81, 0x39, 0x73,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc1, 0x8c, 0x19, 0x80,
   0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xc0, 0x61, 0xe6, 0x4c, 0xe0, 0x07,
   0x0e, 0x0c, 0xf8, 0x03, 0x00, 0xc0, 0x19, 0x33, 0x66, 0x70, 0x0f, 0x1e,
   0x0e, 0x18, 0x03, 0x00, 0xc0, 0x8d, 0x99, 0x73, 0x38, 0x00, 0x1e, 0x1f,
   0x0c, 0x00, 0x00, 0xc0, 0xe7, 0x8c, 0x7c, 0x18, 0x00, 0x3e, 0x0f, 0x1c,
   0x00, 0x00, 0xc0, 0x33, 0x66, 0x76, 0x0c, 0x00, 0xf6, 0x19, 0xf8, 0x01,
   0x00, 0xc0, 0x39, 0x33, 0x73, 0x0c, 0x00, 0xe6, 0x0d, 0xf0, 0x03, 0x00,
   0xc0, 0xcc, 0x99, 0x71, 0x1c, 0x00, 0xc6, 0x18, 0x00, 0x07, 0x00, 0x00,
   0x66, 0xcc, 0x70, 0x18, 0x00, 0x06, 0x0c, 0x00, 0x06, 0x00, 0x80, 0x33,
   0x67, 0x70, 0x38, 0x04, 0x06, 0x18, 0x0c, 0x07, 0x00, 0x80, 0x98, 0x31,
   0x70, 0xf0, 0x0f, 0x06, 0x0c, 0xfc, 0x03, 0x00, 0xc0, 0xcc, 0x1c, 0x7c,
   0xc0, 0x03, 0x06, 0x08, 0xf0, 0x01, 0x00, 0x00, 0x67, 0x06, 0x3f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x83, 0x1f, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0xe1, 0x07, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xfb, 0x01, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };


static unsigned char beer_0_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0,
   0x54, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x02, 0x6a, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
   0x00, 0xe0, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00,
   0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x18,
   0x00, 0x00, 0x00, 0x00, 0x60, 0x80, 0x85, 0x83, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x40, 0x41, 0xff, 0xff, 0xaf, 0x03, 0x00, 0x00, 0x00, 0x80, 0x81,
   0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0x07,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xaf, 0xff, 0xff, 0x07, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0x07, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x87,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x03, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static unsigned char beer_1_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x48, 0xef, 0x3b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x85, 0x83, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x43, 0xff, 0xff, 0xaf, 0x03, 0x00, 0x00, 0x00, 0x00, 0x81,
   0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0x07,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xaf, 0xff, 0xff, 0x07, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0x07, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x87,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x03, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static unsigned char beer_2_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x85, 0x83, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0xaf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0x07, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x87,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x03, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static unsigned char beer_3_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0x07, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x87,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x03, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static unsigned char beer_4_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00, 0x00, 0x00, 0x06,
   0x00, 0x00, 0xfe, 0x08, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x07,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0x07, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x87,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x03, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static unsigned char beer_5_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00, 0x00, 0x00, 0x06,
   0x00, 0x00, 0xfe, 0x08, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x04,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0x2e, 0x18, 0xf8, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0x07, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x87,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x03, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static unsigned char beer_6_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02,
   0x00, 0x00, 0xfe, 0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x06,
   0x00, 0x00, 0x06, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x87,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x03, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static unsigned char beer_7_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02,
   0x00, 0x00, 0xfe, 0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x02,
   0x00, 0x00, 0x06, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x86,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x02, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0x0e, 0x00, 0x00, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xde,
   0x03, 0xc0, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static unsigned char beer_8_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6,
   0x00, 0xc4, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x1c,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02,
   0x00, 0x00, 0xfe, 0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x02,
   0x00, 0x00, 0x06, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x86,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x0f, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x00, 0x00, 0x43, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x02,
   0x00, 0x00, 0xdf, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x67,
   0x01, 0x00, 0x00, 0x00, 0x80, 0x0e, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x06,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0xb6, 0xad, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };