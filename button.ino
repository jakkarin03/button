#include <Servo.h>
#define sw D1
Servo myservo;


void setup() {
  // put your setup code here, to run once:
    myservo.attach(D7);
    myservo.write(120);

    pinMode(sw, INPUT_PULLUP);

    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
     
     
     if (digitalRead(sw) == LOW) {
    myservo.write(10); //unlock
    //lcd.print(0, 0, " BUTTON UNLOCK ");
    //lcd.print(0, 1, "   DOOR OPEN   ");
    //digitalWrite(led,HIGH);
    delay(5000);
    myservo.write(120); //lock
    //digitalWrite(led,LOW);
    Serial.println("push");
  }
}
