#include <Servo.h>

Servo swanky;

void setup()
{
  swanky.attach(5);
}

void loop()
{
  
  for( int angle = -360; angle < 360 ; angle++)
  {
    swanky.write(angle);
    delay(3);
  }
}
