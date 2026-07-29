const int nutBam = 2;
const int buzzer = 8;

void setup() {
  pinMode(nutBam, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(nutBam) == HIGH) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }
}