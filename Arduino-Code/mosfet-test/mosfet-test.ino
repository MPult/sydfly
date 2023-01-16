// color swirl! connect an RGB LED to the PWM pins as indicated
// in the #defines
// public domain, enjoy!

#define BLUEPIN 3//MEGA 3
#define REDPIN 5//MEGA 5
#define GREENPIN 6//MEGA 6

#define trigPin 12//MEGA 13
#define echoPin 11//MEGA 12

#define FADESPEED 3       // make this higher to slow down
#define distThreshold 20  // How high distance needs to be before starting LED
#define mode 1 // 1: rgb fade, 2: const yellow

void setup() {
  Serial.begin(9600);
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2);        // Added this line
  digitalWrite(trigPin, HIGH);
  //  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10);  // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  Serial.print(distance);
  Serial.println(" cm");

  if (distance > distThreshold) {
    // LEDS need to be on, check what mode to be run
    if(mode == 1) {
    RGB(); 
    }
    if (mode == 2) {
      yellow();
    }
  } else {
    analogWrite(REDPIN, 0);
    analogWrite(BLUEPIN, 0);
    analogWrite(GREENPIN, 0);
  }
  delay(500);
}

void yellow() {
  analogWrite(REDPIN, 255);
  analogWrite(GREENPIN, 69);
  analogWrite(BLUEPIN, 0);
}

void RGB() {
  int r, g, b;
  Serial.print(r);
  Serial.print(",");
  Serial.print(g);
  Serial.print(",");
  Serial.println(b);
  // fade from blue to violet
    // fade from blue to violet
  for (r = 0; r < 256; r++) { 
    analogWrite(REDPIN, r);
    delay(FADESPEED);
  } 
  // fade from violet to red
  for (b = 255; b > 0; b--) { 
    analogWrite(BLUEPIN, b);
    delay(FADESPEED);
  } 
  // fade from red to yellow
  for (g = 0; g < 256; g++) { 
    analogWrite(GREENPIN, g);
    delay(FADESPEED);
  } 
  // fade from yellow to green
  for (r = 255; r > 0; r--) { 
    analogWrite(REDPIN, r);
    delay(FADESPEED);
  } 
  // fade from green to teal
  for (b = 0; b < 256; b++) { 
    analogWrite(BLUEPIN, b);
    delay(FADESPEED);
  } 
  // fade from teal to blue
  for (g = 255; g > 0; g--) { 
    analogWrite(GREENPIN, g);
    delay(FADESPEED);
  } 
}