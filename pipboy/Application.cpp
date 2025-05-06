#include "Application.h"

void Application::setStatus(Status newStatus) {
    currentStatus = newStatus;
}

void Application::process() {
    led.update();
    delay(1000);
}