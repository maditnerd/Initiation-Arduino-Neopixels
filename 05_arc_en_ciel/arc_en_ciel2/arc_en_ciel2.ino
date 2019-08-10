/*
  Leçon 5 - Neopixels

  Faire un arc en ciel - Sans bug!
*/

#include <Adafruit_NeoPixel.h>
int BROCHE_LEDS = 3;
int NOMBRE_LEDS = 6;
int LUMINOSITE = 30;

Adafruit_NeoPixel leds(NOMBRE_LEDS, BROCHE_LEDS, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  leds.setBrightness(LUMINOSITE);
  leds.begin();
}

void loop() {

  // Un int (entier) peut être entre -32768 à 32767
  // Un long (entier long) peut aller de -2147483648 à 2147483647
  for (long i = 0; i < 65536; i = i+256) {
    Serial.println(i);
    leds.setPixelColor(0, leds.ColorHSV(i));
    leds.show();
  }
}
