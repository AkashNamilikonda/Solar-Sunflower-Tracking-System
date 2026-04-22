#include <Servo.h>

Servo myServo;

int leftLDR = A5;
int rightLDR = A0;

int position = 100;      // calibrated center
int threshold = 60;      // sensitivity
int minLight = 120;      // ignore low light
int stepSize = 15;       // step movement of 15 degrees

void setup() {
  Serial.begin(9600);
  myServo.attach(9);
  myServo.write(position);
}

void loop() {

  int leftValue = analogRead(leftLDR);
  int rightValue = analogRead(rightLDR);

  int difference = leftValue - rightValue;

  Serial.print("Left: ");
  Serial.print(leftValue);
  Serial.print("  Right: ");
  Serial.print(rightValue);
  Serial.print("  Diff: ");
  Serial.print(difference);
  Serial.print("  Pos: ");
  Serial.println(position);

  // Move only if enough light and difference is significant
  if ((leftValue > minLight || rightValue > minLight) &&
      abs(difference) > threshold) {

    if (difference > 0) {
      position -= stepSize;   // move left
    } else {
      position += stepSize;   // move right
    }

    position = constrain(position, 20, 160);
    myServo.write(position);

    delay(500);  // allow servo to settle
  }

  delay(200);
}