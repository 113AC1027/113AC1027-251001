  const int pushButton = 2; // the number of the pushbutton pin
  const int ledPin = 3;     // the number of the LED pin

  // variables will change:
  int buttonState = 0; // variable for reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
  /*pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);*/

  
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //greem
  /*digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH); 
  delay(5000);

  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW); 
  delay(1000);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW); 
  delay(8000);*/

  // read the state of the pushbutton value:
  buttonState = digitalRead(pushButton);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, LOW);
  } else {
    // turn LED off:
    digitalWrite(ledPin, HIGH);
    }
}
