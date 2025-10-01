const int pushButton = 8;
const int RledPin = 2;
const int GledPin = 3;
const int BledPin = 4;

int buttonState = 0;
int ledcolor = 0;

bool ButtonPressed = false;
String currentcolor="led";

void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(pushButton, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(pushButton);
Serial.print("Current Color");
Serial.println(currentcolor);
if(buttonState == HIGH && !ButtonPressed){
  ledcolor = ledcolor + 1;
  ButtonPressed = true;
}

if(buttonState == LOW && ButtonPressed){
  ButtonPressed = false;
}

//if (buttonState == HIGH){
  //ledcolor = ledcolor + 1;
  //delay(100);
//}

if (ledcolor == 0){
  currentcolor="LED off";
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 1){
  currentcolor ="Red";
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 2){
  currentcolor ="Blue";
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 3){
   currentcolor ="Green";
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}
else if (ledcolor == 4){
   currentcolor ="Cyan";
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}
else if (ledcolor == 5){
   currentcolor ="Green";
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}
else if (ledcolor == 6){
   currentcolor ="Blue";
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
else if (ledcolor == 7){
   currentcolor ="White";
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
else if (ledcolor == 8){
  ledcolor = 0;
}
}
