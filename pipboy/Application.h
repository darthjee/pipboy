#include "LedInterface.h"
#ifndef APPLICATION_H
#define APPLICATION_H

class Application {
public:
    LedInterface ledInterface;
    // Enum para representar os possíveis estados da aplicação
    enum Status {
        IDLE,
        RUNNING,
        ERROR,
        OFF
    };

    // Método para definir o status da aplicação
    void setStatus(Status newStatus);

    void process();

private:
    // Atributo para armazenar o status atual
    Status currentStatus;
};

#endif // APPLICATION_H