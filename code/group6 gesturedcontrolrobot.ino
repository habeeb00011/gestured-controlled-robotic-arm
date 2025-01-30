#include <Servo.h>
#include<EEPROM.h>

Servo servo1;  
Servo servo2;
Servo servo3;
Servo servo4;

int pin1 = 0;
int pin2 = 1;
int pin3 = 2;
int pin4= 3;
int val;
int data;    

void setup() {
 servo1.attach(11);  
 servo2.attach(10);
 servo3.attach(9);
 servo4.attach(3);
}

void loop() {
  val = analogRead(pin1);         
  val = map(val, 0, 1023, 0, 180);
  EEPROM.write(data,val);
  servo1.write(val);          
  delay(1);
    
   
   val = analogRead(pin2);          
   val = map(val, 0, 1023, 0, 180);  
   EEPROM.write(data,val);
   servo2.write(val);                  
   delay(1);

  val = analogRead(pin3);          
  val = map(val, 0, 1023, 0, 180);     
  EEPROM.write(data,val);
  servo3.write(val);                  
  delay(1);

  val = analogRead(pin4);          
  val = map(val, 0, 1023, 0, 180);     
  EEPROM.write(data,val);
  servo4.write(val);                  
  delay(1);
}