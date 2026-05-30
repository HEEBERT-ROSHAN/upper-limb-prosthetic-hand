#include <Servo.h>

Servo pinkeyServo;
Servo ringServo;
Servo middleServo;
Servo indexServo;
Servo thumbServo;

const int button1 = 2;   // Mode button
const int button2 = 3;   // Release button

unsigned long pressStart = 0;
bool gripActive = false;

void setup() {
  pinkeyServo.attach(9);
  ringServo.attach(10);
  middleServo.attach(11);
  indexServo.attach(6);
  thumbServo.attach(5);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void closeFullGrip() {
  for(int angle = 0; angle <= 150; angle++) {

    if(angle <= 120)
      pinkeyServo.write(angle);

    if(angle <= 135)
      ringServo.write(angle);

    middleServo.write(150 - angle);
    indexServo.write(150 - angle);

    if(angle <= 60)
      thumbServo.write(60 - angle);

    delay(15);
  }
}

void closePinch() {
  for(int angle = 0; angle <= 150; angle++) {

    indexServo.write(150 - angle);

    if(angle <= 60)
      thumbServo.write(60 - angle);

    delay(15);
  }
}

void openAll() {
  for(int angle = 90; angle >= 0; angle--) {

    pinkeyServo.write(angle);
    ringServo.write(angle);
    middleServo.write(150 - angle);
    indexServo.write(150 - angle);

    if(angle <= 60)
      thumbServo.write(60 - angle);

    delay(15);
  }
}

void loop() {

  // -------- BUTTON 1 (Mode Selection) --------
  if(digitalRead(button1) == LOW) {

    pressStart = millis();

    while(digitalRead(button1) == LOW);

    unsigned long pressTime = millis() - pressStart;

    if(pressTime >= 3000) {
      closeFullGrip();   // Long press → Full grip
    } else {
      closePinch();      // Short press → Pinch
    }

    gripActive = true;
  }

  // -------- BUTTON 2 (Release) --------
  if(digitalRead(button2) == LOW && gripActive) {
    openAll();
    gripActive = false;
  }
}