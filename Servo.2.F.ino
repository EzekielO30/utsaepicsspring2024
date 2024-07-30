#include <Servo.h>

Servo servo1; //Declare Servo 1
Servo servo2; // Declare Servo 2

void setup() {
  servo1.attach(5);  //pin 5, signal l -black
  servo2.attach(6); //pin 6, signal 2 -red
  servo1.write(0); // puts 3 servos at Zero
  servo2.write(0); // Puts the other 3 at Zero
  delay(15000); // This line add 3 seconds of just waiting at Zero Position; 15 sec should be good here delay(15000)
}

void loop() {
  ///this section is for the first set of servos
  for (int pos1 = 0; pos1 <= 75; pos1 += 1) {
    servo1.write(pos1);
    delay(100); // rate of the ramping down for the first set of servos
  }
 ///this section is for the second set of servos
  for (int pos2 = 0; pos2 <= 75; pos2 += 1) {
    servo2.write(pos2);
    delay(100);// rate of the ramping down for the second set of servos
  }
  delay(30000); //once both ramps are down, stay down for X many seconds
}
