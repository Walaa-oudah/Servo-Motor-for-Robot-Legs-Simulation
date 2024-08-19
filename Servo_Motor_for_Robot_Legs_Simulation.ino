#include <Servo.h>

Servo srh,slh,srn,sln,srf,slf;  
int pos = 0;    
void setup() {
  srh.attach(13);
  slh.attach(12);
  srn.attach(11);
  sln.attach(10);
  srf.attach(9);
  slf.attach(8);
}


void loop() {
  for (pos = 0; pos <= 95; pos += 1) {
       srh.write(pos);
       srn.write(pos);
       srf.write(pos);
    delay(10);
  }
  for (pos = 95; pos >= 0; pos -= 1) { 
       srh.write(pos);
       srn.write(pos);
       srf.write(pos);
    delay(25);
  }
  for (pos = 0; pos <= 95; pos += 1) {
       slh.write(pos);
       sln.write(pos);
       slf.write(pos);
    delay(25);
  }
  for (pos = 95; pos >= 0; pos -= 1) { 
       slh.write(pos);
       sln.write(pos);
       slf.write(pos);
    delay(10);
  }
}
