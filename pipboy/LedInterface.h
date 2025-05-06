#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

#include <Arduino.h> // Required for uint8_t type

class LedInterface {
public:
    // Constructor that receives the RGB pins
    LedInterface(uint8_t pin_r, uint8_t pin_g, uint8_t pin_b)
        : pin_r(pin_r), pin_g(pin_g), pin_b(pin_b) {
        // Set pins as output
        pinMode(pin_r, OUTPUT);
        pinMode(pin_g, OUTPUT);
        pinMode(pin_b, OUTPUT);
    }

    // Method to set the colors of the LED
    void setColors(uint8_t color_r, uint8_t color_g, uint8_t color_b);

private:
    uint8_t pin_r; // Pin for the red LED
    uint8_t pin_g; // Pin for the green LED
    uint8_t pin_b; // Pin for the blue LED
};

#endif // LED_INTERFACE_H