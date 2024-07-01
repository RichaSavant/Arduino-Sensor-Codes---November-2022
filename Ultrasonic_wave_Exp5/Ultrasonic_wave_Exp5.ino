const int trigPIN = 9;
const int echoPIN  = 10;

long duration;
int distance;


void setup() {
  pinMode(trigPIN,OUTPUT);
  pinMode(echoPIN,INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPIN,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPIN,LOW);
  
  duration = pulseIn(echoPIN,HIGH);
  distance = duration * 0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);

}
