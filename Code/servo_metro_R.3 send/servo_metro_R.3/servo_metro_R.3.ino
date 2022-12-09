#include <Servo.h>
Servo myservo;

int IR = 13;
boolean lastState = false;

void setup() {
  Serial.begin(9600);
  pinMode(IR, INPUT);
  myservo.attach(9);
}
 
void loop() { 
    //send
    if(digitalRead(IR) == LOW){      //识别的时候0
    if(lastState == false){
      Serial.write('2'); //关闭
      lastState = true;
      //Serial.println("2");
    }
  }else if(digitalRead(IR) == HIGH){ //不识别的时候1
    Serial.write('1'); //打开
    //delay(1000);
    if(lastState == true){
      lastState = false;
      //Serial.println("0");
    }
  }

  //contol duoji
  if (digitalRead(IR) == LOW) {
  //STOP
  delay(1000);  
}
  else{
    
    for (int pos = 5; pos <=  50; pos += 1){
         myservo.write(pos);
         delay(40);
       }
       delay(2500);
       for (int pos = 50; pos >= 5; pos -= 1){
         myservo.write(pos);
         delay(40);
       }
       delay(2000);
  }   
}
