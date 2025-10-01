const int pushButton = 8;
const int RledPin = 2;
const int GledPin = 3;
const int BledPin = 4;

int buttonState = 0;
int ledcolor = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);

pinMode(pushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(pushButton);
if (buttonState == HIGH){
  ledcolor = ledcolor + 1;
  delay(100);
}

if (ledcolor == 0){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 1){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 2){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 3){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}
else if (ledcolor == 4){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 5){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}
else if (ledcolor == 6){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
else if (ledcolor == 7){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
else if (ledcolor == 8){
  ledcolor = 0;
}
}
