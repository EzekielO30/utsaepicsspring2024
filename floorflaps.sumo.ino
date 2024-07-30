#include <Servo.h>

#define BUTTON_PIN 2
#define SERVO_PIN 9

Servo myServo;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  myServo.attach(SERVO_PIN);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) { // Button is pressed
    openDoor();
    delay(30000); // Delay for 30 seconds
    closeDoor();
  }
}

void openDoor() {
  myServo.write(180); // Move servo to open position
}

void closeDoor() {
  myServo.write(0); // Move servo to closed position
}

