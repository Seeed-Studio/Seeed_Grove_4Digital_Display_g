// test for seeed graphical programming project
// loovee @ 2015-8-4

#include "TM1637.h"

const int pinClk = 2;
const int pinDta = 3;

TM1637 led;

void setup()
{
}

void loop()
{
    for(int i=0; i<10000; i++)
    {
        led.DigitDisplayWrite(pinClk, pinDta, i);
        delay(100);
    }
}