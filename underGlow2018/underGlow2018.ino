#include <Adafruit_NeoPixel.h>

#define PIN 8
#define STRIPSIZE 94

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

  for(int i = 0; i < 3; i++)
  {
    pinkOrange();
  }
  transition1();
//------------------------------------------
  for(int i = 0; i < 5; i++)
  {
    flower();
  }
  transition1();
//------------------------------------------
  //for(int i = 0; i < 2; i++)
  //{
    //camera();
  //}
//------------------------------------------  
  for(int i = 0; i < 120; i++)
  {
    chase();
  }
  transition1();
//------------------------------------------
//for(int i = 0; i < 50; i++)
  //{
    //fire();
  //}
    //transition1();
//------------------------------------------
for(int i = 0; i < 350; i++)
  {
    shimmer();
  }
  transition1();
//------------------------------------------
for(int i = 0; i < strip.numPixels(); i++)
  {
      strip.setPixelColor(i, 0, 0, 0);
      strip.show();  
  }
for(int i = 0; i < 23; i++)
  {
    miami();
  }
  transition1();
//------------------------------------------
  for(int i = 0; i < 1; i++)
  {
    rainbowCycle(8);
  }
  transition1();
//------------------------------------------
  for(int i = 0; i < 200; i++)
  {
    sparkle();
  }
  transition1();
//------------------------------------------
//for(int i = 0; i < 10; i++)
  //{
    //neon();
    //delay(200);
  //}
  //transition1();
//------------------------------------------
}
void sparkle()
{
  for(int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, random(0,255), random(0,255), random(0,255)); 
  }
  strip.show();
  delay(50);
}
//------------------------------------------
void flower()
{
 for(int j = 0; j < 256; j++)
{
  int counter = 0;
  for(int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, j, i+25, i+25);    
  }
  strip.show();
  delay(10);
}  
for(int j = 255; j > -1; j--)
{
  for(int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, j, i+25, i+25);   
  }
  strip.show();
  delay(10);
}
}  

void camera()
{
  for(int i = 0; i < strip.numPixels(); i++)
    {
      strip.setPixelColor(i,50,50,100);
      strip.show();
    }
    strip.show();
    //----------------------------------------------------------------------
  delay(random(0,3000));
  int r = random(1, 10);
  for(int j = 0; j < r; j++)
  {
    for(int i = 0; i < strip.numPixels(); i++)
    {
      strip.setPixelColor(i,255,255,255);
    }
  strip.show();
  delay(50);
    for(int i = 0; i < strip.numPixels(); i++)
    {
    strip.setPixelColor(i,50,50,100);
    }
  strip.show();
  delay(50);
  }
  for(int i = 0; i < strip.numPixels(); i++)
    {
      strip.setPixelColor(i,0,0,0);
      strip.show();
    }
}

void chase()
{
  for(int i = 0; i < 10; i++)
  {
    for(int j = i; j < strip.numPixels(); j+= 10)
    {
      strip.setPixelColor(j, 200,0,100);
    }
    strip.show();
    delay(10);
    for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, 0,0,0);
    }
    strip.show();
    
  }
}

void fire()
{
  int r = 255;
int g = 100;
int b = 12;

for(int x = 0; x <93; x++)
{
  if(random(50) > 25)
  {
int flicker = random(0,110);
int r1 = r-flicker;
int g1 = g-flicker;
int b1 = b-flicker;
if(g1<0) g1=0;
if(r1<0) r1=0;
if(b1<0) b1=0;
strip.setPixelColor(x,r1,g1, b1);
  }
  else
  {
    strip.setPixelColor(x,20,10,0);
  }
}
strip.show();
delay(random(10,100));
}

void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

void shimmer()
{
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.setPixelColor(random(0,strip.numPixels()), 255,255,255);
  strip.show();
  delay(80);
  for(int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, 50,50,50);
    
  }
  strip.show();
}

void pinkOrange()
{
  for(int i = 50; i >= 0; i--)
  {
    for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, 255, i, i);
    }
    strip.show();
    delay(20);
  }
  for(int i = 0; i <= 50; i++)
  {
    for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, 255, i, 0);
    }
    strip.show();
    delay(20);
  }
  for(int i = 50; i >= 0; i--)
  {
    for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, 255, i, 0);
    }
    strip.show();
    delay(20);
  }
  for(int i = 0; i <= 50; i++)
  {
    for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, 255, i, i);
    }
    strip.show();
    delay(20);
  }
}

void transition1()
{
  for(int i = 0; i < strip.numPixels(); i++)
  {
    if(i%2 == 0)
    {
      strip.setPixelColor(i, 0 , 0, 255);
      strip.show();
      delay(5);
    }
    else
    {
      strip.setPixelColor(i ,255,255,0);
      strip.show();
      delay(5);
    }
  }
}

void miami() //thanks hnh
{
  for(int i = 0; i < strip.numPixels(); i++)
  {
      strip.setPixelColor(random(0,strip.numPixels()), 255 , 24, 155);
      delay(0);
      strip.show();
      strip.setPixelColor(random(0,strip.numPixels()), 0, 250, 133);
      delay(3);
      strip.show();
  }
}

void neon()
{
  for(int i = 0; i <= 200; i++)
  {
    if(random(0,100) == 50)
    {
      for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, i, 255, i/2);
    }
    strip.show();
    }
    for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, i, 0, i/2);
    }
    strip.show();
  }
  for(int i = 200; i >= 0; i--)
  {
    if(random(0,100) == 50)
    {
      for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, i, 255, i/2);
    }
    strip.show();
    }
    for(int j = 0; j < strip.numPixels(); j++)
    {
      strip.setPixelColor(j, i, 0, i/2);
    }
    strip.show();
  }
}



