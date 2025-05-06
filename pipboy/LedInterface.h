#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

#include <Arduino.h> // Necessário para o tipo uint8_t

class LedInterface {
public:
    // Construtor que recebe os pinos RGB
    LedInterface(uint8_t pin_r, uint8_t pin_g, uint8_t pin_b)
        : pin_r(pin_r), pin_g(pin_g), pin_b(pin_b) {}

private:
    uint8_t pin_r; // Pino para o LED vermelho
    uint8_t pin_g; // Pino para o LED verde
    uint8_t pin_b; // Pino para o LED azul
};

#endif // LED_INTERFACE_H