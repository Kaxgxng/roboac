#include <Arduino.h>
#include <AccelStepper.h>
// put function declarations here:
int myFunction(int, int);

#define Mode 1
#define PUL 13
#define DIR 12


AccelStepper stepper(Mode,PUL,DIR); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup()
{  
  Serial.begin(115200);
  stepper.setMaxSpeed(1500);
  stepper.setAcceleration(750);
  stepper.runToNewPosition(500);
  Serial.println("Hi Stepper");
}

void loop()
{    
  stepper.runToNewPosition(100);
  stepper.runToNewPosition(300);
  stepper.runToNewPosition(10);
}
