#include "Application.h"

void Application::setStatus(Application::Status newStatus) {
    StatusLed::Status newLedStatus;
    currentStatus = newStatus;

    switch (currentStatus) {
        case OFF:
            newLedStatus = StatusLed::Status::OFF;
            break;
        case IDLE:
            newLedStatus = StatusLed::Status::IDLE;
            break;
        case PROCESSING:
            newLedStatus = StatusLed::Status::PROCESSING;
            break;
        case ERROR:
            newLedStatus = StatusLed::Status::ERROR;
            break;
    }
}

void Application::process() {
    /*
    switch (currentStatus) {
        case OFF:
            setStatus(Application::Status::IDLE);
            break;
        case IDLE:
            setStatus(Application::Status::PROCESSING);
            break;
        case PROCESSING:
            setStatus(Application::Status::ERROR);
            break;
        case ERROR:
            setStatus(Application::Status::OFF);
            break;
    }
    */
    updateComponents();

    delay(300);
}

void Application::updateComponents() {
    led.update();
}