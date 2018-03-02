#include <RGBConverter.h>
#include <Adafruit_NeoPixel.h>
#define PIN 8
Adafruit_NeoPixel strip = Adafruit_NeoPixel(94, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
 strip.begin();
 strip.show();

}

void loop() {

    //hasCube();
    //off();
    //isClimbing();
}

void hasCube()
{
  for(int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, 0, 255, 0);
  }
  strip.show();
  delay(800);
  for(int j = strip.numPixels(); j > 0; j--)
  {    
    strip.setPixelColor(j, 0, 0, 0);
  }
  strip.show();
}

void off()
{
  for(int j = strip.numPixels(); j > 0; j--)
  {    
    strip.setPixelColor(j, 0, 0, 0);
  }
  strip.show();
}

void isClimbing() //thanks joshua
{
 for (int i = 0; i < 3; i++)
 {
   if (i = 0)
   {
     for (int x = -2; x < strip.numPixels(); x += 3)
     {
       strip.setPixelColor(i, 0, 255, 0);
       strip.show();
     }
     delay(1000);
     for (int x = -2; x < strip.numPixels(); x++) 
     {
       strip.setPixelColor(i, 0, 0, 0);
       strip.show();
     }
   }

   if (i = 1)
   {
     for (int x = -1; x < strip.numPixels(); x += 3)
     {
       strip.setPixelColor(i, 0, 255, 0);
       strip.show();
     }
     delay(1000);
     for (int x = -1; x < strip.numPixels(); x += 3)
     {
       strip.setPixelColor(i, 0, 0, 0);
       strip.show();
     }
   }

   if (i = 2)
   {
     for (int x = 0; x < strip.numPixels(); x += 3)
     {
       strip.setPixelColor(i, 0, 255, 0);
       strip.show();
     }
     delay(1000);
     for (int x = 0; x < strip.numPixels(); x += 3)
     {
       strip.setPixelColor(i, 0, 0, 0);
       strip.show();
     }
   }

 }
}



