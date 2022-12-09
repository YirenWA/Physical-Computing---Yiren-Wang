const int echo = 6;
const int trig = 7;
const int led1 = 3;
const int led2 = 10;



// variables will change:
float duration, distance;
int safetyDistance; // centimeters
//int duration = 0;
//int distance = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 
  digitalWrite(trig,HIGH);
  delayMicroseconds(50);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);
  distance = 0.034 * duration/2; //(duration/2)/28.5;
  safetyDistance = distance;
  
  if (safetyDistance <= 30){
    digitalWrite(led1, HIGH);// turn on LED
    digitalWrite(led2, HIGH);// turn on LED
  }
  else {
    digitalWrite(led1, LOW);  // turn off LED
    digitalWrite(led2, LOW);  // turn off LED
  }
  // print the value to Serial Monitor
  Serial.print("distance: ");
  //Serial.print(distance);
  Serial.println(distance);

  delay(100);
  
}
