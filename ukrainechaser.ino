//created by Mr.FunnyPenguin in August 2022.
#include "FastLED.h"

#define NUM_LEDS 100
#define LED_PIN 3
//#define CLOCK_PIN 3
#define LED_TYPE WS2811
#define COLOR_ORDER RGB
CRGB leds[NUM_LEDS];

#define FRAMES_PER_SECOND  150


void setup() {
  FastLED.addLeds<WS2811, LED_PIN, RGB>(leds, NUM_LEDS);
FastLED.setBrightness(255); 

}


void loop() {

 uint8_t sinBeat = beatsin8(12, 0, NUM_LEDS - 1, 0, 0);//trail1
 uint8_t sinBeat2 = beatsin8(12, 0, NUM_LEDS - 1, 0, 85);//trail2

 

 leds[sinBeat] = CRGB::CRGB(200,200,0);//gold trail
 leds[sinBeat2] = CRGB::CRGB(0,60,255);//blue trail
 
 fadeToBlackBy(leds, NUM_LEDS, 3);




    FastLED.show();

}
