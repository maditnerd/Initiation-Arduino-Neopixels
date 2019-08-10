/*
  Leçon 3 - Neopixels

  Faire clignoter les leds (fonctions)
*/

#include <Adafruit_NeoPixel.h>
int BROCHE_LEDS = 3;
int NOMBRE_LEDS = 6;
int LUMINOSITE = 30;

Adafruit_NeoPixel leds(NOMBRE_LEDS, BROCHE_LEDS, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  leds.setBrightness(LUMINOSITE);
  leds.begin();
}

void loop() {
  couleur(255, 100, 0, 0);
  delay(1000);
  eteint();
  delay(1000);

}

// Fonction sans paramètres (arguments)
void eteint() {
  for (int i = 0; i < NOMBRE_LEDS; i++) {
    leds.setPixelColor(i, 0, 0, 0, 0);
  }
  leds.show();
}

// Fonctions avec 4 paramètres (arguments)
void couleur(int rouge, int vert, int bleu, int blanc ) {
  for (int i = 0; i < NOMBRE_LEDS; i++) {
    leds.setPixelColor(i, rouge, vert, bleu, blanc);
  }
  leds.show();
}
