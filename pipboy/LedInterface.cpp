#include "LedInterface.h"

// Method to set the colors of the LED
void LedInterface::setColors(uint8_t color_r, uint8_t color_g, uint8_t color_b) {
    digitalWrite(pin_r, color_r);
    digitalWrite(pin_g, color_g);
    digitalWrite(pin_b, color_b);
}