int sensorPin  = A0;
int sensorValue = 0;
int threshold = 400;
int ledPin = 13;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue > threshold)
  {
    digitalWrite(ledPin,1); 
  }
  else
  {
    digitalWrite(ledPin,0);
  }
}
