#include "LedStripeInterface.h"


void LedStripeInterface::setColors(uint8_t color_r, uint8_t color_g, uint8_t color_b) {
    for (uint16_t i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, strip.Color(color_r, color_g, color_b));
    }
    show();
}

void LedStripeInterface::show() {
    strip.show();
}

void LedStripeInterface::clear() {
    strip.clear();
    show();
}