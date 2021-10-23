
#include <Servo.h>

Servo servo_motor;

void setup() {
  servo_motor.attach(9);
}

void loop() {
  for (int i=0; i<=180; i++)
  {
    servo_motor.write(i);
    delay(10);
  }
  for (int i=180; i>=0; i--)
  {
    servo_motor.write(i);
    delay(10);
  }
  delay(100);
}
