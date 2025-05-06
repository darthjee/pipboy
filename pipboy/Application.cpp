#include "Application.h"

void Application::setStatus(Application::Status newStatus) {
    currentStatus = newStatus;
}

void Application::process() {
    updateComponents();

    delay(1000);
}

void Application::updateComponents() {
    led.update();
}