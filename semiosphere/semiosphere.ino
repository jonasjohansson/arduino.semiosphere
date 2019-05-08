#include<FastLED.h>
#include "palettes.h"

#define CHIPSET UCS1903
#define DATA_PIN 6
#define NUM_LEDS 40
#define BRIGHTNESS 255 // 0-255

CRGB leds[NUM_LEDS];

unsigned long previousMillis = 0;
const long interval = 100; 

void setup() {
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.addLeds<CHIPSET, DATA_PIN>(leds, NUM_LEDS);
  FastLED.clear();
  //Serial.begin(9600);
}

void loop() {

  CRGBPalette16 bg_p_1( backgrounds_p[0] );
  CRGBPalette16 bg_p_2( backgrounds_p[1] );

  for (int i = 0; i < NUM_LEDS; i = i + 2) {
    
    int index = cos8( millis() / 100 + i);
    CRGB color = ColorFromPalette(bg_p_1, index, 255, LINEARBLEND);
    leds[i] = color;
  }
  
  for (int i = 1; i < NUM_LEDS; i = i + 2) {
    
    int index = cos8( millis() / 100 + i);
    int rIndex = random(0,NUM_LEDS);
    
    CRGB color = ColorFromPalette(bg_p_2, index, 255, LINEARBLEND);
    leds[i] = color;
    
    unsigned long currentMillis = millis();

//    if (currentMillis - previousMillis >= interval) {
//      previousMillis = currentMillis;
//      leds[rIndex] += CRGB::Red;
//    }
    
  }

  if( random8() < 200) {
    leds[ random16(NUM_LEDS) ] += CRGB::Yellow;
   }
   
  if( random8() < 200) {
    leds[ random16(NUM_LEDS) ] = CRGB::Black;
   }
    
  FastLED.show();
}
