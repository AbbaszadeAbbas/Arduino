// Led_Button
int Button = 2;
int Led = 3;
int helper;
void setup() {
  pinMode(Button, INPUT);
  pinMode(Led, OUTPUT);
}
void loop() {
  helper = digitalRead(Button);
  if(helper == HIGH){
    digitalWrite(Led, HIGH);
  }else {
    digitalWrite(Led, LOW);
  }
}


















