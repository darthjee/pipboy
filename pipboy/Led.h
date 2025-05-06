#ifndef LED_H
#define LED_H

#include "LedInterface.h" 

class Led {
public:
    Led() {}

    LedInterface interface;
};

#endif // LED_H