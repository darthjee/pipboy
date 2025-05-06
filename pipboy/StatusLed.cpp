#include "StatusLed.h"
#include <Arduino.h>

void StatusLed::changeStatus(StatusLed::Status newStatus) {
    currentStatus = newStatus;
}

void StatusLed::update() {
    switch (currentStatus) {
        case OFF:
            break;
        case IDLE:
            // Ligar o LED verde
            break;
        case PROCESSING:
            // Ligar o LED azul
            break;
        case ERROR:
            // Ligar o LED vermelho
            break;
    }
}