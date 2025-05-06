#ifndef LED_H
#define LED_H

#include "LedInterface.h" 
#define LED_PIN_R 16
#define LED_PIN_G 255
#define LED_PIN_B 2

class StatusLed {
public:
    StatusLed() : interface(LED_PIN_R, LED_PIN_G, LED_PIN_B) {}

    LedInterface interface;
};

#endif // LED_H