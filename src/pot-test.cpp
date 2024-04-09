#include <Arduino.h>

const uint8_t potPin = A4; // changer cette valeur pour celle dans votre circuit

int potVal = 0;
int oldPotVal = potVal;

void setup() {
    // déclarer l'usage des broches
    pinMode(potPin, INPUT);

    // pour le déboggage
    Serial.begin(9600);
}

void loop() {
    // lire la valeur sur le potentiomètre
    potVal = analogRead(potPin);

    // afficher seulement si la valeur a changé
    if (potVal != oldPotVal){
        // mettre à jour oldPotVal avec la nouvelle valeur
        oldPotVal = potVal;
        // afficher la valeur
        Serial.print("Pot value: ");
        Serial.println(potVal);
        Serial.println(); // ligne vide
    }

    delay(100); // antirebond
}
