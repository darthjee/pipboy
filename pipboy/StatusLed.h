#ifndef LED_H
#define LED_H

#include "Component.h"

#define LED_NEOPIXEL
#if defined(LED_NEOPIXEL)

#include "LedStripeInterface.h"
#define LED_NUM 1
#define LED_NEOPIXEL_PIN 15

#elif defined(LED_DIGITAL)

#include "RGBLedInterface.h"
#define LED_PIN_R 16
#define LED_PIN_G 255
#define LED_PIN_B 2

#endif

class StatusLed : public Component {
public:
    enum Status {
        OFF,
        IDLE,
        PROCESSING,
        ERROR
    };

#if defined(LED_NEOPIXEL)
    StatusLed() : interface(LED_NUM, LED_NEOPIXEL_PIN, NEO_RGB + NEO_KHZ800) {}
#elif defined(LED_DIGITAL)
    StatusLed() : interface(LED_PIN_R, LED_PIN_G, LED_PIN_B) {}
#endif

    void changeStatus(Status newStatus);
    void update() override;

#if defined(LED_NEOPIXEL)
    LedStripeInterface interface;
#elif defined(LED_DIGITAL)
    RGBLedInterface interface;
#endif

private:
    Status currentStatus;
};

#endif // LED_H