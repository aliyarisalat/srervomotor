
# include <Servo.h>

Servo servomotor;
int servopin=3;

void setup() {
  // put your setup code here, to run once:
  servomotor.attach(servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
  servomotor.write(10);
  delay(100);

}
