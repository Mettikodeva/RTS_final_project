
// #define LOGO_HEIGHT 16
// #define LOGO_WIDTH 16
// 'download2', 128x64px
const unsigned char bitmap1[] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x01, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xfb, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xe0, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xc0, 0x7f, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe7, 0xc0, 0x7f, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x2f, 0x82, 0x7f, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0x86, 0x7f, 0xe3, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0x80, 0xff, 0xc1, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0xc1, 0xff, 0x80, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xef, 0x80, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xe3, 0x90, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xe7, 0x80, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xff, 0x6f, 0xc0, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xff, 0x97, 0xc0, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x3f, 0xf3, 0xe1, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x1f, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x03, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x1f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x03, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xf8, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0x80, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x03, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

const unsigned char bitmap2[] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xf8, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x9f, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7e, 0x0f, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x7c, 0x07, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x78, 0x07, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x78, 0x27, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x38, 0x6f, 0xfe, 0x3f, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x38, 0x0f, 0xfc, 0x1f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1c, 0x1f, 0xf8, 0x0f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xf8, 0x0f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xfe, 0x39, 0x0f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xff, 0x78, 0x0f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0xf6, 0xfc, 0x0f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0xf9, 0x7c, 0x0f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0xff, 0x3e, 0x1f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x3f, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x0f, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xf0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xf0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xf8, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xf8, 0x21, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x07, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x7c, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x01, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

const unsigned char bitmap[] PROGMEM = {0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x75, 0x55, 0x55, 0x55, 0x51, 0x51, 0x15, 0x51, 0x55, 0xa0, 0x02, 0x22, 0x22, 0x22, 0x02, 0xff, 0xff, 0xa0, 0x20, 0x22, 0x20, 0x20, 0x02, 0x02, 0x22, 0x55, 0x55, 0x55, 0x55, 0x55, 0x01, 0xff, 0xff, 0xd4, 0x15, 0x55, 0x55, 0x54, 0x55, 0x55, 0x55, 0xae, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf8, 0x08, 0x00, 0x80, 0x08, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x54, 0x01, 0x7f, 0xff, 0xf4, 0x15, 0x55, 0x51, 0x55, 0x15, 0x51, 0x55, 0xbb, 0xba, 0x02, 0x22, 0x00, 0x03, 0xff, 0xff, 0xf8, 0x02, 0x02, 0x20, 0x20, 0x00, 0x02, 0x20, 0x55, 0x55, 0x55, 0x55, 0x54, 0x05, 0xff, 0xff, 0xfc, 0x05, 0x55, 0x55, 0x54, 0x55, 0x55, 0x55, 0xaf, 0xeb, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x54, 0x17, 0xff, 0xff, 0xff, 0x11, 0x55, 0x51, 0x55, 0x15, 0x11, 0x55, 0x22, 0xbb, 0xa2, 0x20, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x20, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0x55, 0x55, 0x55, 0x54, 0x55, 0x45, 0x54, 0x00, 0x08, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x0a, 0x80, 0x00, 0x00, 0x00, 0x00, 0x11, 0x51, 0x15, 0x55, 0x57, 0x77, 0x77, 0xf5, 0x77, 0x55, 0x15, 0x51, 0x55, 0x15, 0x11, 0x55, 0x00, 0x00, 0x02, 0x22, 0x23, 0xff, 0xe3, 0xfe, 0xff, 0xf0, 0x02, 0x80, 0x20, 0x00, 0x00, 0x20, 0x05, 0x44, 0x55, 0x55, 0x55, 0xff, 0xc5, 0xfc, 0x5f, 0xd5, 0x55, 0x45, 0x54, 0x55, 0x45, 0x54, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x83, 0xf8, 0x7f, 0xf8, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0x01, 0x11, 0x15, 0x55, 0x57, 0x77, 0x17, 0xf5, 0x77, 0x71, 0x15, 0x51, 0x55, 0x11, 0x11, 0x51, 0x00, 0x00, 0x02, 0x22, 0x2f, 0xff, 0x07, 0xfa, 0x3f, 0xf8, 0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0x50, 0x05, 0x55, 0x55, 0x5d, 0xdd, 0x57, 0xfc, 0x1d, 0xd5, 0x55, 0x44, 0x54, 0x55, 0x45, 0x50, 0x80, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x1f, 0xfe, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x51, 0x55, 0x55, 0x57, 0x75, 0x17, 0x77, 0x17, 0x75, 0x15, 0x51, 0x55, 0x11, 0x11, 0x51, 0xbb, 0x22, 0x22, 0x22, 0x3f, 0xff, 0xbf, 0xff, 0xaf, 0xfe, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x5d, 0x55, 0x5f, 0xdd, 0xd5, 0x5d, 0x55, 0x44, 0x54, 0x15, 0x45, 0x55, 0x2a, 0xb8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x55, 0x55, 0x55, 0x55, 0x15, 0x55, 0x75, 0x17, 0x75, 0x75, 0x15, 0x51, 0x15, 0x11, 0x11, 0x55, 0x02, 0xa2, 0x22, 0x22, 0x00, 0xfb, 0xb8, 0x0f, 0xfb, 0xf8, 0x02, 0x00, 0x20, 0x00, 0x00, 0x02, 0x55, 0x45, 0x55, 0x54, 0x00, 0x55, 0x55, 0x55, 0x55, 0x54, 0x05, 0x44, 0x54, 0x15, 0x45, 0x45, 0x0b, 0x80, 0x00, 0x80, 0x00, 0x3e, 0xa2, 0x8a, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x15, 0x05, 0x55, 0x55, 0x00, 0x15, 0x55, 0x15, 0x55, 0x50, 0x05, 0x51, 0x15, 0x11, 0x11, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xa2, 0x0a, 0x3b, 0xa0, 0x00, 0x00, 0x20, 0x00, 0x00, 0x2a, 0x00, 0x15, 0x55, 0x54, 0x00, 0x05, 0x55, 0x55, 0x55, 0x40, 0x01, 0x40, 0x54, 0x04, 0x41, 0x55, 0x80, 0x2a, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x50, 0x55, 0x55, 0x50, 0x00, 0x00, 0x11, 0x15, 0x55, 0x00, 0x01, 0x51, 0x15, 0x11, 0x11, 0x75, 0x20, 0x22, 0x2a, 0x20, 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x22, 0x02, 0x32, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x05, 0x45, 0x40, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x55, 0x0a, 0xaf, 0xab, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 0xa8, 0x00, 0x80, 0x55, 0x55, 0x17, 0x51, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x15, 0x55, 0x55, 0x55, 0x01, 0xab, 0xa3, 0x3e, 0x80, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x02, 0x22, 0xba, 0xa0, 0x00, 0x55, 0x55, 0x55, 0x40, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x15, 0x55, 0x55, 0x54, 0x00, 0xee, 0xee, 0xae, 0x80, 0x00, 0x00, 0x00, 0x2a, 0xa8, 0xe0, 0x00, 0x0a, 0x8a, 0xa8, 0xa8, 0x00, 0x55, 0x55, 0x55, 0x10, 0x00, 0x00, 0x00, 0x55, 0x55, 0x50, 0x00, 0x15, 0x55, 0x55, 0x71, 0x01, 0xbb, 0xbb, 0xba, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfa, 0x60, 0x00, 0x02, 0xa2, 0x23, 0xa0, 0x00, 0x55, 0x55, 0x55, 0x40, 0x00, 0x00, 0x00, 0x55, 0x55, 0x70, 0x00, 0x05, 0x55, 0x55, 0x54, 0x00, 0xaf, 0xee, 0xee, 0x80, 0x00, 0x00, 0x00, 0x2f, 0xeb, 0xf0, 0x00, 0x02, 0xea, 0xaa, 0x00, 0x00, 0x55, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00, 0x15, 0x55, 0x51, 0x00, 0x15, 0x55, 0x55, 0x10, 0x11, 0xbb, 0xbb, 0xbb, 0xe0, 0x00, 0x00, 0x00, 0x3b, 0xbf, 0x00, 0x00, 0x03, 0xae, 0xba, 0x00, 0x00, 0x55, 0x55, 0x55, 0xd0, 0x00, 0x00, 0x00, 0x15, 0xd5, 0x44, 0x00, 0x01, 0x55, 0x54, 0x40, 0x00, 0xaa, 0xee, 0xef, 0xe0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x08, 0xe8, 0x00, 0x00, 0x55, 0x55, 0x55, 0x70, 0x00, 0x00, 0x00, 0x11, 0x77, 0x51, 0x11, 0x10, 0x15, 0x55, 0x00, 0x01, 0xaa, 0xbb, 0xbb, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xb8, 0x00, 0x00, 0x0f, 0xb8, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x55, 0x74, 0x00, 0x40, 0x05, 0x54, 0x00, 0x00, 0xae, 0xfe, 0xef, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x62, 0xfc, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x55, 0x55, 0x55, 0x75, 0x50, 0x00, 0x01, 0x11, 0x55, 0x77, 0x11, 0x10, 0x01, 0x54, 0x00, 0x01, 0xab, 0xbb, 0xbb, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x55, 0x50, 0x04, 0x44, 0x15, 0x55, 0x40, 0x00, 0x01, 0x41, 0x40, 0x01, 0xaf, 0xee, 0xea, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0xcf, 0xaa, 0xe0, 0x15, 0x55, 0x55, 0x77, 0x75, 0x00, 0x01, 0x11, 0x55, 0x55, 0x50, 0x11, 0x11, 0x55, 0x75, 0x51, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x02, 0x00, 0x00, 0x3b, 0xfa, 0x00, 0x00, 0x00, 0xaa, 0x3f, 0xf0, 0x54, 0x55, 0x50, 0x55, 0x50, 0x50, 0x00, 0x01, 0x55, 0x55, 0x50, 0x44, 0x40, 0x55, 0x55, 0x40, 0x00, 0x80, 0x28, 0xff, 0xe0, 0x00, 0x00, 0x03, 0x8e, 0xea, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x55, 0x57, 0x55, 0x55, 0x50, 0x00, 0x00, 0x15, 0x55, 0x55, 0x11, 0x10, 0x10, 0x55, 0x55, 0x51, 0x20, 0x00, 0x3f, 0xbb, 0xa0, 0x00, 0x00, 0x00, 0xaa, 0xa2, 0x02, 0x00, 0x00, 0x22, 0x20, 0x2a, 0x54, 0x45, 0x55, 0x55, 0x40, 0x00, 0x00, 0x55, 0x55, 0x55, 0x45, 0x00, 0x05, 0x55, 0x15, 0x55, 0x80, 0x00, 0x2e, 0xab, 0x80, 0x00, 0x00, 0x00, 0xa8, 0x80, 0x00, 0x00, 0x00, 0xae, 0x20, 0xfe};