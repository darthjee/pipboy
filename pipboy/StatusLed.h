#ifndef LED_H
#define LED_H

#include "LedInterface.h"
#include "Component.h"
#define LED_PIN_R 16
#define LED_PIN_G 255
#define LED_PIN_B 2

class StatusLed : public Component {
public:
    enum Status {
        OFF,
        IDLE,
        PROCESSING,
        ERROR
    };

    StatusLed() : interface(LED_PIN_R, LED_PIN_G, LED_PIN_B) {}

    void changeStatus(Status newStatus);
    void update() override;

    LedInterface interface;

private:
    Status currentStatus;
};

#endif // LED_H