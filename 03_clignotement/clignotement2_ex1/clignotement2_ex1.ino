/*
  Leçon 3 - Neopixels

  Exercice 2 : Lumière de la police
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
  police();
}

void police(){
  lumiere_bleu();
  delay(50);
  pas_de_lumiere();
  delay(50);
  lumiere_bleu();
  delay(50);
  pas_de_lumiere();
  delay(50);
  lumiere_rouge();
  delay(50);
  pas_de_lumiere();
  delay(50);
  lumiere_rouge();
  delay(50);
  pas_de_lumiere();
  delay(50);
}

void pas_de_lumiere() {
  for (int i = 0; i < NOMBRE_LEDS; i++) {
    leds.setPixelColor(i, 0, 0, 0, 0);
  }
  leds.show();
}

void lumiere_bleu() {
  for (int i = 0; i < 3; i++) {
    leds.setPixelColor(i, 255, 0, 0, 0);
  }
  leds.show();
}

void lumiere_rouge() {
  for (int i = 3; i < 6; i++) {
    leds.setPixelColor(i, 0, 0, 255, 0);
  }
  leds.show();
}
