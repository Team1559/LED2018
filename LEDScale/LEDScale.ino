#include <Adafruit_NeoPixel.h>

#define PIN 8
#define STRIPSIZE 93

const int  buttonPin = 9; 

int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

boolean redState = true;
boolean blueState = true;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(STRIPSIZE, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
   // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(PIN, OUTPUT);
   
  strip.begin();
  strip.setBrightness(1000);  // Lower brightness and save eyeballs!
  strip.show(); // Initialize all pixels to 'off'
}
  int wait[] = {0};
void loop() {
  
  buttonTest();
}

void buttonTest()
{
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
    }    
    // Delay a little bit to avoid bouncing
    
    delay(100);
    lastButtonState = buttonState;
 }
   switch(buttonPushCounter%5)
    {
      case 0:
      for(int i = 0; i < strip.numPixels(); i++)
      {
        strip.setPixelColor(i, 0, 0, 0);
      }
      strip.show();
      break;
      case 1:
      for(int i = 0; i < strip.numPixels(); i++)
      {
        strip.setPixelColor(i, 255, 0, 0);
      }
      strip.show();
      break;
      case 2:
      for(int i = 0; i < strip.numPixels(); i++)
      {
        strip.setPixelColor(i, 0, 0, 255);
      }
      strip.show();
      break;
      case 3:
      if(redState)
      {
        for(int i = 0; i < strip.numPixels(); i++)
        {
        //strip.setPixelColor(i, 0, 255, 0);
        strip.setPixelColor(i, 255, 0, 0);
        }
      }
      else
       {
        for(int i = 0; i < strip.numPixels(); i++)
        {
        //strip.setPixelColor(i, 0, 255, 0);
        strip.setPixelColor(i, 0, 0, 0);
        }
        }
       redState = !redState;
      strip.show();
      delay(250);
      break;
      case 4:
      if(blueState)
      {
        for(int i = 0; i < strip.numPixels(); i++)
        {
        //strip.setPixelColor(i, 0, 255, 0);
        strip.setPixelColor(i, 0, 0, 255);
        }
      }
      else
       {
        for(int i = 0; i < strip.numPixels(); i++)
        {
        //strip.setPixelColor(i, 0, 255, 0);
        strip.setPixelColor(i, 0, 0, 0);
        }
        }
       blueState = !blueState;
      strip.show();
      delay(250);
      break;
    }
}










