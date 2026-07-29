const int chanBienTro = A0;
const int chanLED = 9;

void setup() {
  pinMode(chanLED, OUTPUT);
}

void loop() {
  int giaTri = analogRead(chanBienTro);
  int doSang = map(giaTri, 0, 1023, 0, 255);
  analogWrite(chanLED, doSang);
}