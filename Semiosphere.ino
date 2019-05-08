#include<FastLED.h>
#include "palettes.h"

#define CHIPSET UCS1903
#define DATA_PIN 6
#define NUM_LEDS 30
#define BRIGHTNESS 255 // 0-255

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.addLeds<CHIPSET, DATA_PIN>(leds, NUM_LEDS);
  FastLED.clear();
  Serial.begin(9600);
}

void loop() {

    CRGBPalette16 bg_p( backgrounds_p[1] );

    for (int i = 0; i < NUM_LEDS; i++) {
      
      int index = cos8( millis() / 100 + i);
      CRGB color = ColorFromPalette(bg_p, index, 255, LINEARBLEND);
      leds[i] = color;
    }
    
  FastLED.show();
}
