// Include the library
#include <Servo.h>
// Create the servo object
Servo myservo;
// Setup section to run once
void setup() {
myservo.attach(9); // attach the servo to our servo object
}
// Loop to keep the motor turning!
void loop() {
// myservo.write(0); // rotate the motor counterclockwise
// myservo.write(45);
myservo.write(179);
// myservo.write(180);
// myservo.write(-90);
// myservo.write(-45);
delay(1000);
}