/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/DigitalReadSerial/
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
const int ButtonPin = 2;
const int Rpin = 3;
const int Bpin = 4;
const int Gpin = 5;

int ButtonState = 0;
int ledcolor = 0;

bool ButtonPressed = false;

String currentcolor = "led";

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  
  // make the pushbutton's pin an input:
  pinMode(Rpin, OUTPUT);
  pinMode(Gpin, OUTPUT);
  pinMode(Bpin, OUTPUT);

  pinMode(ButtonPin, INPUT);

  Serial.begin(9600);

}

// the loop routine runs over and over again forever:
void loop() {

  Serial.print("Current Color:");
  Serial.println(currentcolor);
  // read the input pin:
  int buttonState = digitalRead(ButtonPin);
  // print out the state of the button:
  //Serial.println(buttonState);
  //delay(1);  // delay in between reads for stability

  /*if(buttonState == LOW){
    ledcolor = ledcolor + 1;
    delay(100);
  }*/  //快速隨機抽的

  if(buttonState == LOW && !ButtonPressed){
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
    //delay(100);
  }
  if(buttonState == HIGH && ButtonPressed){
    ButtonPressed = false;
  }

  //no light
  if(ledcolor == 0){
    currentcolor="LED OFF";
    digitalWrite(Rpin, HIGH);
    digitalWrite(Gpin, HIGH);
    digitalWrite(Bpin, HIGH);
  }
  //R
  else if(ledcolor == 1){
    currentcolor="R";
    digitalWrite(Rpin, LOW);
    digitalWrite(Gpin, HIGH);
    digitalWrite(Bpin, HIGH);
  }
  //G
  else if(ledcolor == 2){
    currentcolor="G";
    digitalWrite(Rpin, HIGH);
    digitalWrite(Gpin, LOW);
    digitalWrite(Bpin, HIGH);
  }
  //B
  else if(ledcolor == 3){
    currentcolor="B";
    digitalWrite(Rpin, HIGH);
    digitalWrite(Gpin, HIGH);
    digitalWrite(Bpin, LOW);
  }
  //Y
  else if(ledcolor == 4){
    currentcolor="Y";
    digitalWrite(Rpin, LOW);
    digitalWrite(Gpin, LOW);
    digitalWrite(Bpin, HIGH);
  }
  //M
  else if(ledcolor == 5){
    currentcolor="M";
    digitalWrite(Rpin, LOW);
    digitalWrite(Gpin, HIGH);
    digitalWrite(Bpin, LOW);
  }
  //C
  else if(ledcolor == 6){
    currentcolor="C";
    digitalWrite(Rpin, HIGH);
    digitalWrite(Gpin, LOW);
    digitalWrite(Bpin, LOW);
  }
  //W
  else if(ledcolor == 7){
    currentcolor="W";
    digitalWrite(Rpin, LOW);
    digitalWrite(Gpin, LOW);
    digitalWrite(Bpin, LOW);
  }
  //=no light
  else if(ledcolor == 8){
    currentcolor="LED OFF";
    ledcolor = 0;
  }
}
