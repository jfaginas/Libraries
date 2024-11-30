#include <Buzzer.h>

Buzzer buzzer(13, 500, 500); // Buzzer en pin 13 con 500ms ON/OFF por defecto

void setup() {
    buzzer.beep(5); // Hacer 5 bips
}

void loop() {
    buzzer.update(); // Necesario para manejar los bips
}
