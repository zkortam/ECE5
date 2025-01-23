

// ----- Problem 1 -----
void turnLedOn(CRGB color, int index) {
  leds[index] = color;
  FastLED.show();   // <-- Very important and easy to forget!!!
}

void turnLedOff(int index) {
  /* COMPLETE ME */
  leds[index] = CRGB::Black;
  FastLED.show(); 
}

// ----- Problem 2 -----
void turnAllLedsOff() {
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = CRGB::Black;
  FastLED.show();
}

void turnAllLedsOn(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = color;
  FastLED.show();
}

// ----- Problem 3 -----
void bouncePixel(CRGB color, int waitTime) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
    FastLED.show();
    delay(waitTime);
    leds[i] = CRGB::Black;
    FastLED.show();
  }

  /* FINISH ME */

}






