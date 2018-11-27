int Cont=0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println (Cont);
  Cont++; //cont=cont+1
  delay(1000);
}
