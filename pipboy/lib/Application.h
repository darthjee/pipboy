#ifndef APPLICATION_H
#define APPLICATION_H

class Application {
public:
    // Enum para representar os possíveis estados da aplicação
    enum Status {
        IDLE,
        RUNNING,
        ERROR
    };

    // Método para definir o status da aplicação
    void setStatus(Status newStatus);

private:
    // Atributo para armazenar o status atual
    Status currentStatus;
};

#endif // APPLICATION_H