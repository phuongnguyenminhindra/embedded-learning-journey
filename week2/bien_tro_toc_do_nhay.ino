const int chanBienTro = A0;
const int chanLED = 9;

void setup() {
  pinMode(chanLED, OUTPUT);
}

void loop() {
  int giaTri = analogRead(chanBienTro);
  int toc_do = map(giaTri, 0, 1023, 50, 500);

  digitalWrite(chanLED, HIGH);
  delay(toc_do);
  digitalWrite(chanLED, LOW);
  delay(toc_do);
}