#include "Application.h"

void Application::setStatus(Application::Status newStatus) {
    currentStatus = newStatus;
    setLedStatus();
}


void Application::setLedStatus() {
    StatusLed::Status newStatus;

    switch (currentStatus) {
        case OFF:
            newStatus = StatusLed::Status::OFF;
            break;
        case IDLE:
            newStatus = StatusLed::Status::IDLE;
            break;
        case PROCESSING:
            newStatus = StatusLed::Status::PROCESSING;
            break;
        case ERROR:
            newStatus = StatusLed::Status::ERROR;
            break;
    }

    led.changeStatus(newStatus);
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
    setLedStatus();
    updateComponents();

    delay(300);
}

void Application::updateComponents() {
    led.update();
}