#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT A3
#define OE  9
#define A   A0
#define B   A1
#define C   A2
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void setup() {
  matrix.begin();


  //1
  for (int i = 4; i < 12; i++)
  {
    matrix.drawPixel(6, i, matrix.Color333(0, 0, 255));
  }
  matrix.drawPixel(5, 5, matrix.Color333(0, 0, 255));
  matrix.drawPixel(4, 5, matrix.Color333(0, 0, 255));

  //temp
  //matrix.drawPixel(6, 8, matrix.Color333(0, 0, 255));
  //matrix.drawPixel(4, 8, matrix.Color333(0, 0, 0));
  
  for (int i = 4; i < 9; i++)
  {
    matrix.drawPixel(i, 11 , matrix.Color333(0, 0, 255));
  }
  //5
  for (int i = 10; i < 15; i++)
  {
    matrix.drawPixel(i, 4, matrix.Color333(0, 0, 255));
  }
  

  for (int i = 10; i < 15; i++)
  {
    matrix.drawPixel(i, 7, matrix.Color333(0, 0, 255));
  }
  matrix.drawPixel(10, 5, matrix.Color333(0, 0, 255));
  matrix.drawPixel(10, 6, matrix.Color333(0, 0, 255));
  for (int i = 10; i < 15; i++)
  {
    matrix.drawPixel(i, 11, matrix.Color333(0, 0, 255));
  }
  matrix.drawPixel(14, 8, matrix.Color333(0, 0, 255));
  matrix.drawPixel(14, 9, matrix.Color333(0, 0, 255));
  matrix.drawPixel(14, 10, matrix.Color333(0, 0, 255));

  //5
  for (int i = 17; i < 22; i++)
  {
    matrix.drawPixel(i, 4, matrix.Color333(0, 0, 255));
  }
  

  for (int i = 17; i < 22; i++)
  {
    matrix.drawPixel(i, 7, matrix.Color333(0, 0, 255));
  }
  matrix.drawPixel(17, 5, matrix.Color333(0, 0, 255));
  matrix.drawPixel(17, 6, matrix.Color333(0, 0, 255));
  for (int i = 17; i < 22; i++)
  {
    matrix.drawPixel(i, 11, matrix.Color333(0, 0, 255));
  }
  matrix.drawPixel(21, 8, matrix.Color333(0, 0, 255));
  matrix.drawPixel(21, 9, matrix.Color333(0, 0, 255));
  matrix.drawPixel(21, 10, matrix.Color333(0, 0, 255));

  //9
  for (int i = 23; i < 27; i++)
  {
    matrix.drawPixel(i, 4, matrix.Color333(0, 0, 255));
  }
  matrix.drawPixel(23, 5, matrix.Color333(0, 0, 255));
  matrix.drawPixel(23, 6, matrix.Color333(0, 0, 255));
  for (int i = 23; i < 27; i++)
  {
    matrix.drawPixel(i, 7, matrix.Color333(0, 0, 255));
  }
  for (int i = 4; i < 12; i++)
  {
    matrix.drawPixel(27, i, matrix.Color333(0, 0, 255));
  }
}

void loop() {
  offn();
}

void offn()
{
for(int k = 0; k < 4; k++)
  {
    for(int j = 0; j < 9; j++)
    {
      matrix.drawPixel(k+(j*4), 0, matrix.Color333(255, 220, 0));
      matrix.drawPixel(31, k+(j*4), matrix.Color333(255, 220, 0));
    }
    for(int j = 8; j >= 0; j--)
    {
      matrix.drawPixel((3-k)+(j*4), 15, matrix.Color333(255, 220, 0));
      matrix.drawPixel(0, (3-k)+(j*4), matrix.Color333(255, 220, 0));
    }
    delay(45);
    allOff();
  }
}

void allOff()
{
  for(int i = 0; i < 32; i++)
  {
    matrix.drawPixel(i, 0, matrix.Color333(0,0,0));
    matrix.drawPixel(i, 15, matrix.Color333(0,0,0));
  }   
  for(int i = 0; i < 16; i++)
  {
    matrix.drawPixel(0, i, matrix.Color333(0,0,0));
    matrix.drawPixel(31, i, matrix.Color333(0,0,0));
  }
}

