const int nutBam = 2;

void setup() {
  pinMode(nutBam, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int trangThai = digitalRead(nutBam);
  if (trangThai == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Dang bam nut");
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("Khong bam");
  }
  delay(100);
}