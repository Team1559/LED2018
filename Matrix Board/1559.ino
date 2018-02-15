#include <FastLED.h>
#define NUM_LEDS 484
#define DATA_PIN 8
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  
}

void loop() {
  oneFive59(0, 0, 255, 0);
  //zeroAnd44(0, 0, 255);
}

void oneFive59(int r, int g, int b, int d)
{
  //1
  leds[76] = CRGB(r, g, b);
  leds[97] = CRGB(r, g, b);
  leds[98] = CRGB(r, g, b);
  leds[99] = CRGB(r, g, b);
  leds[164] = CRGB(r, g, b);
  leds[187] = CRGB(r, g, b);
  leds[252] = CRGB(r, g, b);
  leds[275] = CRGB(r, g, b);
  leds[340] = CRGB(r, g, b);
  leds[363] = CRGB(r, g, b);
  leds[428] = CRGB(r, g, b);
  leds[427] = CRGB(r, g, b);
  leds[426] = CRGB(r, g, b);
  leds[429] = CRGB(r, g, b);
  leds[430] = CRGB(r, g, b);
  //5
  leds[72] = CRGB(r, g, b);
  leds[71] = CRGB(r, g, b);
  leds[70] = CRGB(r, g, b);
  leds[69] = CRGB(r, g, b);
  leds[68] = CRGB(r, g, b);
  leds[103] = CRGB(r, g, b);
  leds[160] = CRGB(r, g, b);
  leds[191] = CRGB(r, g, b);
  leds[248] = CRGB(r, g, b);
  leds[247] = CRGB(r, g, b);
  leds[246] = CRGB(r, g, b);
  leds[245] = CRGB(r, g, b);
  leds[244] = CRGB(r, g, b);
  leds[283] = CRGB(r, g, b);
  leds[332] = CRGB(r, g, b);
  leds[371] = CRGB(r, g, b);
  leds[420] = CRGB(r, g, b);
  leds[424] = CRGB(r, g, b);
  leds[423] = CRGB(r, g, b);
  leds[422] = CRGB(r, g, b);
  leds[421] = CRGB(r, g, b);
  //5
  leds[65] = CRGB(r, g, b);
  leds[64] = CRGB(r, g, b);
  leds[63] = CRGB(r, g, b);
  leds[62] = CRGB(r, g, b);
  leds[61] = CRGB(r, g, b);
  leds[110] = CRGB(r, g, b);
  leds[153] = CRGB(r, g, b);
  leds[198] = CRGB(r, g, b);
  leds[241] = CRGB(r, g, b);
  leds[240] = CRGB(r, g, b);
  leds[239] = CRGB(r, g, b);
  leds[238] = CRGB(r, g, b);
  leds[237] = CRGB(r, g, b);
  leds[290] = CRGB(r, g, b);
  leds[325] = CRGB(r, g, b);
  leds[378] = CRGB(r, g, b);
  leds[413] = CRGB(r, g, b);
  leds[417] = CRGB(r, g, b);
  leds[416] = CRGB(r, g, b);
  leds[415] = CRGB(r, g, b);
  leds[414] = CRGB(r, g, b);
  //9
  leds[59] = CRGB(r, g, b);
  leds[58] = CRGB(r, g, b);
  leds[57] = CRGB(r, g, b);
  leds[56] = CRGB(r, g, b);
  leds[55] = CRGB(r, g, b);
  leds[235] = CRGB(r, g, b);
  leds[234] = CRGB(r, g, b);
  leds[233] = CRGB(r, g, b);
  leds[232] = CRGB(r, g, b);
  leds[231] = CRGB(r, g, b);
  leds[116] = CRGB(r, g, b);
  leds[147] = CRGB(r, g, b);
  leds[204] = CRGB(r, g, b);
  leds[120] = CRGB(r, g, b);
  leds[143] = CRGB(r, g, b);
  leds[208] = CRGB(r, g, b);
  leds[296] = CRGB(r, g, b);
  leds[319] = CRGB(r, g, b);
  leds[384] = CRGB(r, g, b);
  leds[407] = CRGB(r, g, b);
  FastLED.show();
  while(true)
  {
for(int i = 0; i <= 43; i++)
{
  leds[i] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[i - 1] = CRGB::Black;
  FastLED.show();
  delay(d);
}
//Vertical right
  leds[44] = CRGB::Yellow; //44
  FastLED.show();
  delay(d);
  leds[43] = CRGB::Black;
  FastLED.show();
  delay(d);
  
  leds[131] = CRGB::Yellow; //131
  FastLED.show();
  delay(d);
  leds[44] = CRGB::Black;
  FastLED.show();
  delay(d);
  
  leds[132] = CRGB::Yellow; //132
  FastLED.show();
  delay(d);
  leds[131] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[219] = CRGB::Yellow; //219
  FastLED.show();
  delay(d);
  leds[132] = CRGB::Black;
  FastLED.show();
  delay(d);
  
  leds[220] = CRGB::Yellow; //220
  FastLED.show();
  delay(d);
  leds[219] = CRGB::Black;
  FastLED.show();
  delay(d);
    
  leds[307] = CRGB::Yellow; //307
  FastLED.show();
  delay(d);
  leds[220] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[308] = CRGB::Yellow; //308
  FastLED.show();
  delay(d);
  leds[307] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[395] = CRGB::Yellow; //395
  FastLED.show();
  delay(d);
  leds[308] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[396] = CRGB::Yellow; //396
  FastLED.show();
  delay(d);
  leds[395] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[483] = CRGB::Yellow; //483
  FastLED.show();
  delay(d);
  leds[396] = CRGB::Black;
  FastLED.show();
  delay(d);
  leds[483] = CRGB::Black;

  //Bottom
for(int i = 483; i >= 439; i--)
{
  leds[i] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[i + 1] = CRGB::Black;
  FastLED.show();
  delay(d);
}
//Vertical left
  leds[440] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[439] = CRGB::Black;
  FastLED.show();
  delay(d);
  
  leds[351] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[440] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[352] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[351] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[263] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[352] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[264] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[263] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[175] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[264] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[176] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[175] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[87] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[176] = CRGB::Black;
  FastLED.show();
  delay(d);

  leds[88] = CRGB::Yellow;
  FastLED.show();
  delay(d);
  leds[87] = CRGB::Black;
  FastLED.show();
  delay(d);
  leds[88] = CRGB::Black;
 }
}

void zeroAnd44(int r, int g, int b)
{
  leds[0] = CRGB(r, g, b);
  leds[44] = CRGB(r, g, b);
  FastLED.show();

}








