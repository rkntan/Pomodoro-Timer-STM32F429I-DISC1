// 4.19.1 0xa9cf740d
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_icons_down_arrow_48[]; // BITMAP_BLUE_ICONS_DOWN_ARROW_48_ID = 0, Size: 46x26 pixels
extern const unsigned char image_blue_icons_up_arrow_48[]; // BITMAP_BLUE_ICONS_UP_ARROW_48_ID = 1, Size: 46x26 pixels
extern const unsigned char image_blue_pageindicator_dot_indicator_small_highlight[]; // BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_HIGHLIGHT_ID = 2, Size: 15x15 pixels
extern const unsigned char image_blue_pageindicator_dot_indicator_small_normal[]; // BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_NORMAL_ID = 3, Size: 15x15 pixels
extern const unsigned char image_dark_buttons_round_edge_icon_button[]; // BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID = 4, Size: 60x60 pixels
extern const unsigned char image_dark_buttons_round_edge_icon_button_pressed[]; // BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID = 5, Size: 60x60 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_icons_down_arrow_48, 0, 46, 26, 17, 15, 12, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 7, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_up_arrow_48, 0, 46, 26, 17, 4, 12, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 7, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_pageindicator_dot_indicator_small_highlight, 0, 15, 15, 3, 3, 9, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 9, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_pageindicator_dot_indicator_small_normal, 0, 15, 15, 3, 3, 9, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 9, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_dark_buttons_round_edge_icon_button, 0, 60, 60, 7, 6, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_dark_buttons_round_edge_icon_button_pressed, 0, 60, 60, 7, 6, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase