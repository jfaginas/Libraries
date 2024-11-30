#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h> // Necesario para millis(), pinMode(), digitalWrite(), etc.

class Buzzer {
private:
    int pin;                    // Pin conectado al buzzer
    unsigned long startTime;    // Tiempo de inicio del estado actual
    unsigned long onDuration;   // Duración predeterminada del estado ON (ms)
    unsigned long offDuration;  // Duración predeterminada del estado OFF (ms)
    int totalBips;              // Cantidad total de bips a realizar
    int currentBip;             // Número del bip actual
    bool isOn;                  // Indica si el buzzer está en ON o OFF

public:
    // Constructor
    Buzzer(int buzzerPin, unsigned long defaultOnDuration = 0, unsigned long defaultOffDuration = 0);

    // Configurar un patrón de bips
    void beep(int numBips, unsigned long onTime = 0, unsigned long offTime = 0);

    // Método para manejar el estado del buzzer
    void update();
};

#endif // BUZZER_H

