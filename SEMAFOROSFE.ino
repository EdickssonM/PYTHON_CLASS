
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  delay(70);//Tiempo de espera
  digitalWrite(2,LOW);
  delay(70);
  digitalWrite(4,HIGH);
  delay(60);//Tiempo de espera
  digitalWrite(4,LOW);
  delay(60);
  digitalWrite(7,HIGH);
  delay(1000);//Tiempo de espera
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(5000);//Tiempo de espera
  digitalWrite(8,LOW);
  delay(2000);
  
}
