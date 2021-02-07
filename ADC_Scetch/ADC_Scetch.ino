int value = 0;

void setup() {
  Serial.begin(115200);
  pinMode(A0, INPUT);

}

void loop() {
  value = analogRead(A0);
  Serial.println((4.96/1024)*value);
  delay(10);
}
