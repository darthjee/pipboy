#ifndef APPLICATION_H
#define APPLICATION_H

#include "StatusLed.h"

class Application {
public:
    StatusLed led;
    // Enum para representar os possíveis estados da aplicação
    enum Status {
        IDLE,
        PROCESSING,
        ERROR,
        OFF
    };

    void setStatus(Application::Status newStatus);

    void process();
    void setLedStatus();
    void updateComponents();

private:
    Application::Status currentStatus = OFF;
};

#endif // APPLICATION_H