int ena = 10;
//int enb = 9;
int in1 = 4;
int in2 = 3;
int inByte = 49; //0

void setup() {
  Serial.begin(9600);  
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  analogWrite(ena, 63);//42
}

void loop() {
  if (Serial.available()!=0) {
    while(Serial.available()>0){
    inByte = Serial.read();
    Serial.println(inByte);
    //if(inByte > 0) delay(3000);
    }
  }

  if(inByte == 50){  //2   / 50
    //STOP
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    delay(1000);
      
    }else if(inByte == 49){  //1  / 49

       //CLOCKWISE SPEED
        digitalWrite(in1,HIGH);
        digitalWrite(in2,LOW);
       
        delay(2200);
        
        //change deriction
        digitalWrite(in1,LOW);
        digitalWrite(in2,LOW);
        delay(2000);

    }
  
}
