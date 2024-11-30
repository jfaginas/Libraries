#include "Buzzer.h"

// Constructor
Buzzer::Buzzer(int buzzerPin, unsigned long defaultOnDuration, unsigned long defaultOffDuration)
    : pin(buzzerPin),
      startTime(0),
      onDuration(defaultOnDuration),
      offDuration(defaultOffDuration),
      totalBips(0),
      currentBip(0),
      isOn(false) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW); // Asegurar que empieza apagado
}

// Configurar un patrón de bips
void Buzzer::beep(int numBips, unsigned long onTime, unsigned long offTime) {
    if (onTime == 0) onTime = onDuration;
    if (offTime == 0) offTime = offDuration;

    this->onDuration = onTime;
    this->offDuration = offTime;
    this->totalBips = numBips;
    this->currentBip = 0;
    this->startTime = millis();
    this->isOn = true;

    digitalWrite(pin, HIGH); // Encender el buzzer
}

// Método para manejar el estado del buzzer
void Buzzer::update() {
    if (totalBips == 0) return; // Nada que hacer si no hay bips configurados

    unsigned long currentTime = millis();

    if (isOn && (currentTime - startTime >= onDuration)) {
        digitalWrite(pin, LOW); // Apagar el buzzer
        isOn = false;
        startTime = currentTime;
    } else if (!isOn && (currentTime - startTime >= offDuration)) {
        currentBip++;
        if (currentBip < totalBips) {
            digitalWrite(pin, HIGH); // Encender el buzzer
            isOn = true;
            startTime = currentTime;
        } else {
            totalBips = 0; // Patrón completo
        }
    }
}
