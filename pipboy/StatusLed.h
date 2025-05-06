#ifndef LED_H
#define LED_H

#include "LedInterface.h" 
#define LED_PIN_R 16
#define LED_PIN_G 255
#define LED_PIN_B 2

class StatusLed {
public:
    // Enum para os possíveis status do LED
    enum Status {
        OFF,
        IDLE,
        PROCESSING,
        ERROR
    };

    // Construtor que inicializa o LedInterface com os pinos definidos
    StatusLed() : interface(LED_PIN_R, LED_PIN_G, LED_PIN_B) {}

    // Método para mudar o status do LED
    void changeStatus(Status newStatus);

    LedInterface interface;

private:
    Status currentStatus; // Atributo para armazenar o status atual
};

#endif // LED_H