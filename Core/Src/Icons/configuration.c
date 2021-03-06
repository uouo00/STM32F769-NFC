#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CONFIGURATION
#define LV_ATTRIBUTE_IMG_CONFIGURATION
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_CONFIGURATION uint8_t configuration_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x38, 0x0c, 0x18, 0x07, 0x00, 0x00,
  0x00, 0x7e, 0x0c, 0x0c, 0x1f, 0x80, 0x00,
  0x00, 0xe7, 0x3c, 0x0f, 0x39, 0xc0, 0x00,
  0x01, 0xc3, 0xf8, 0x07, 0xf0, 0xe0, 0x00,
  0x01, 0x81, 0xe0, 0x01, 0xe0, 0x60, 0x00,
  0x01, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x00,
  0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00,
  0x00, 0x60, 0x00, 0x00, 0x01, 0x80, 0x00,
  0x00, 0x70, 0x00, 0x00, 0x03, 0x80, 0x00,
  0x00, 0x30, 0x00, 0x00, 0x03, 0x00, 0x00,
  0x00, 0x30, 0x03, 0xf0, 0x03, 0x00, 0x00,
  0x00, 0x70, 0x0f, 0xfc, 0x03, 0x80, 0x00,
  0x00, 0x60, 0x1e, 0x1e, 0x01, 0x80, 0x00,
  0x01, 0xe0, 0x38, 0x07, 0x01, 0xe0, 0x00,
  0x3f, 0xc0, 0x30, 0x03, 0x00, 0xff, 0x00,
  0x3e, 0x00, 0x70, 0x03, 0x80, 0x1f, 0x00,
  0x30, 0x00, 0x60, 0x01, 0x80, 0x03, 0x00,
  0x30, 0x00, 0x60, 0x01, 0x80, 0x03, 0x00,
  0x30, 0x00, 0x60, 0x01, 0x80, 0x03, 0x00,
  0x30, 0x00, 0x60, 0x01, 0x80, 0x03, 0x00,
  0x3f, 0x00, 0x70, 0x03, 0x80, 0x3f, 0x00,
  0x1f, 0xc0, 0x30, 0x03, 0x00, 0xfe, 0x00,
  0x01, 0xe0, 0x38, 0x07, 0x01, 0xe0, 0x00,
  0x00, 0x60, 0x1e, 0x1e, 0x01, 0x80, 0x00,
  0x00, 0x70, 0x0f, 0xfc, 0x03, 0x80, 0x00,
  0x00, 0x30, 0x03, 0xf0, 0x03, 0x00, 0x00,
  0x00, 0x30, 0x00, 0x00, 0x03, 0x00, 0x00,
  0x00, 0x70, 0x00, 0x00, 0x03, 0x80, 0x00,
  0x00, 0xe0, 0x00, 0x00, 0x01, 0xc0, 0x00,
  0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00,
  0x01, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00,
  0x01, 0x81, 0xe0, 0x01, 0xe0, 0x60, 0x00,
  0x01, 0xc3, 0xf8, 0x07, 0xf0, 0xe0, 0x00,
  0x00, 0xef, 0x3c, 0x0f, 0x3d, 0xc0, 0x00,
  0x00, 0x7c, 0x0c, 0x0c, 0x0f, 0x80, 0x00,
  0x00, 0x38, 0x0c, 0x1c, 0x07, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t configuration = {
  .header.always_zero = 0,
  .header.w = 50,
  .header.h = 50,
  .data_size = 350,
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .data = configuration_map,
};
