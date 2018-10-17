//sofia Chamorro-Felipe Diaz-Edicksson Miramag

//declaro variable para guardar temp en celsius
float tempC;
//declaro varible para el PIN A0
int pinSensorT=0;
int LedRojo = 2 ;
int LedAmarillo = 4;

void setup() {
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAmarillo,OUTPUT);

}

void loop() {
  //
  tempC = analogRead (pinSensorT);
  tempC = (5.0 * tempC * 100) / 1024.0;
  Serial.println (tempC);
  delay (2000);
  if (tempC >= 30){
    digitalWrite(LedRojo,HIGH);
    digitalWrite(LedAmarillo,LOW);
  }else{
    digitalWrite(LedAmarillo,HIGH);
    digitalWrite(LedRojo,LOW);
  }  
}
