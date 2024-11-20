
const int buttonPin = 2;  //d2
const int outPin = 3;     //d3


void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT_PULLUP);
  // initialize the LED as an output:
  pinMode(outPin, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(buttonPin), tasterUnterbricht, FALLING);
  Serial.begin(9600);

}
bool activate = false;
void loop() {
  if (!activate) return;
  digitalWrite(outPin, HIGH);
  delay(500);
  digitalWrite(outPin, LOW);
  delay(500);

}

void tasterUnterbricht() {
  Serial.println("AHHHHHHH");
  activate = !activate;
}
