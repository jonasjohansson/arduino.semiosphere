#include<FastLED.h>
#include "palettes.h"

#define NUM_LEDS 60
#define BRIGHTNESS 140

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.addLeds<UCS1903, 6>(leds, NUM_LEDS);
  FastLED.clear();
}

void loop() {

    CRGBPalette16 bg_p( backgrounds_p[1] );

    for (int i = 0; i < NUM_LEDS; i++) {
      int index = cos8( millis() / 20 + i);
      CRGB color = ColorFromPalette(bg_p, index, 255, LINEARBLEND);
      leds[i] = color;
    }
  FastLED.show();
}
