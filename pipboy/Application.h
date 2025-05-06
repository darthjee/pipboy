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

    // Método para definir o status da aplicação
    void setStatus(Application::Status newStatus);

    void process();
    void updateComponents();

private:
    Application::Status currentStatus = ERROR;
};

#endif // APPLICATION_H