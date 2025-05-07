#ifndef LED_STRIPE_INTERFACE_H
#define LED_STRIPE_INTERFACE_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h> // Required for NeoPixel functionality
//#include "external/Adafruit_NeoPixel-1.7.0/Adafruit_NeoPixel.h"

class LedStripeInterface {
public:
    // Constructor to initialize the LED stripe
    LedStripeInterface(uint16_t number_pixels, uint16_t pin_number, neoPixelType type)
        : strip(number_pixels, pin_number, type) {
        strip.begin(); // Initialize the NeoPixel library
        strip.show();  // Turn off all pixels initially
    }
    
    void setColors(uint8_t color_r, uint8_t color_g, uint8_t color_b);
    void show();
    void clear();

private:
    Adafruit_NeoPixel strip; // NeoPixel object
};

#endif // LED_STRIPE_INTERFACE_H