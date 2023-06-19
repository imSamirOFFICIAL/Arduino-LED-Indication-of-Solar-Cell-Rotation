const int ldrPinLeft = A0;
const int ldrPinRight = A1;
const int ledPinRight = 3;
const int ledPinLeft = 4;

void setup() {
  pinMode(ledPinLeft, OUTPUT);
  pinMode(ledPinRight, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValueLeft = analogRead(ldrPinLeft);
  int ldrValueRight = analogRead(ldrPinRight);

  Serial.print("1st LDR: ");
  Serial.print(ldrValueLeft);
  Serial.print(" - 2nd LDR: ");
  Serial.print(ldrValueRight);

  if (ldrValueLeft < ldrValueRight) {
    Serial.println(" (Counterclockwise)");
    digitalWrite(ledPinLeft, HIGH);
    digitalWrite(ledPinRight, LOW);
  } else if (ldrValueLeft > ldrValueRight) {
    Serial.println(" (Clockwise)");
    digitalWrite(ledPinLeft, LOW);
    digitalWrite(ledPinRight, HIGH);
  } else {
    Serial.println(" (No rotation)");
    digitalWrite(ledPinLeft, LOW);
    digitalWrite(ledPinRight, LOW);
  }

  delay(100);
}