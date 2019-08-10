/*
  Leçon 2 - Neopixels

  Allumer la première LED en bleu
*/

// Bibliothèque pour gérer les leds
#include <Adafruit_NeoPixel.h>

// Paramètres globales
int BROCHE_LEDS = 3; // Sur quel broche est branché la led
int NOMBRE_LEDS = 6; // Le nombre de LED
int LUMINOSITE = 30; // Luminosité des LED

Adafruit_NeoPixel leds(NOMBRE_LEDS, BROCHE_LEDS, NEO_GRBW + NEO_KHZ800); //Créer l'objet leds (Mode GRBW)

void setup() {
  leds.setBrightness(LUMINOSITE); // Régler la luminosité
  leds.begin(); // Démarrer l'objet LED
  leds.setPixelColor(0, 0, 0, 255, 0); // Définir le pixel 0 à ROUGE:0 VERT:0 BLEU:255 BLANC: 0
  leds.show(); // Appliquer les modifications
}

void loop() {
}
