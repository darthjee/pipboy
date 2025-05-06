#include "Application.h"

void Application::setStatus(Application::Status newStatus) {
    currentStatus = newStatus;
}

void Application::process() {
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
    updateComponents();

    delay(1000);
}

void Application::updateComponents() {
    led.update();
}