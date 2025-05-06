#include "StatusLed.h"

void StatusLed::changeStatus(StatusLed::Status newStatus) {
    currentStatus = newStatus;
}

void StatusLed::update() {
    switch (currentStatus) {
        case OFF:
            interface.setColors(0, 0, 0);
            break;
        case IDLE:
            interface.setColors(0, 255, 0);
            break;
        case PROCESSING:
            interface.setColors(0, 0, 255);
            break;
        case ERROR:
            interface.setColors(255, 0, 0);
            break;
    }
}