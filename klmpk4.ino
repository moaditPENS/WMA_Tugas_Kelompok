#include <Servo.h>   //servo library
Servo servo;   
int servoPin = 9;
int irpin = 3; 

void setup() {       
    Serial.begin(9600);
    servo.attach(servoPin);
    pinMode (irpin,INPUT); 
    servo.write(0);         //close cap on power on 
} 

void loop() {
  int hasil = digitalRead(irpin);
  if(hasil == LOW)
  {
    Serial.println("Ada Halangan");
    servo.write(180);
    delay(3000);
    servo.write(0);
  }
  if(hasil == HIGH)
  {
    Serial.println("Aman, Tidak Ada Halangan");
  }
  delay(250);
}
