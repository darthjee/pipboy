#ifndef LED_H
#define LED_H

#include "LedInterface.h" 

class StatusLed {
public:
   StatusLed() {}

    LedInterface interface;
};

#endif // LED_H