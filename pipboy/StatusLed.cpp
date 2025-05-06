#include "StatusLed.h"

void StatusLed::changeStatus(StatusLed::Status newStatus) {
    currentStatus = newStatus;
}

void StatusLed::update() {
}