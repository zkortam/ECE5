#include <FastLED.h>

#define LED_PIN    9 
#define NUM_LEDS   10
#define BRIGHTNESS 100
CRGB leds[NUM_LEDS];

void setup() { // Stuff in here runs once
  /* FIX ME: What code to enable the Serial monitor? */
  Serial.begin(9600);

  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip ); // Initialize the led strip
  FastLED.setBrightness(100);                                                             // set the brightness (0 - 100)

  turnLedOn(CRGB::Blue, 0);
  delay(1000);
  turnLedOn(CRGB::Violet, NUM_LEDS - 1);
  delay(1000);
  turnLedOff(0);
  delay(500);
  turnLedOff(NUM_LEDS - 1);
  delay(500);

  turnAllLedsOn(CRGB::Green);
  delay(1000);
  turnAllLedsOff();
  delay(1000);

  bouncePixel(CRGB::Red, 50);
  bouncePixel(CRGB::Orange, 50);
  bouncePixel(CRGB::Yellow, 50);
  bouncePixel(CRGB::Green, 50);
  bouncePixel(CRGB::Blue, 50);
  bouncePixel(CRGB::Violet, 50);
  
}
void loop() { // Stuff in here runs forever
  
}






