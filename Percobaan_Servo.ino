#include <Servo.h>
Servo myservo; // Variabel kendali servo
int pos = 0; // Variabel posisi sudut

void setup()
{
 myservo.attach(9); // Pin Servo 9
}

void loop()
{
  for(pos = 0; pos < 180; pos+= 1) // Perulangan untuk posisi 0 sampai 180 derajat
  { // step setiap 1 derajat
   myservo.write(pos); // Perintah servo ke posisi derajat sesuai nilai variabel pos
   delay(10); // 
  }

  for(pos = 180; pos>=1; pos-=1) // Perulangan untuk posisi 180 sampai 0 derajat
  {
   myservo.write(pos); // Perintah servo ke posisi derajat sesuai nilai variabel pos
   delay(10);
  }
}
