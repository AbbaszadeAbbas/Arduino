// Led_Potentiometer
int ledPin = 13;
int readValue = 0;
int ledValue = 0;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  readValue = analogRead(A0);
  ledValue = map(readValue, 0, 1024, 0, 255);
  analogWrite(ledPin, ledValue);
}