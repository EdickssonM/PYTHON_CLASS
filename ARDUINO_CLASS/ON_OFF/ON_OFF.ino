int LedRojo = 2;
int LedAmarillo = 4;
int LedVerde = 7;
int Motor = 8;
char input = '0';
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAmarillo,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  pinMode(Motor,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   
  if(Serial.available()>0)
  {
    input = Serial.read();
    if (input == '0'){
      Serial.println("Menu");
      Serial.println("1. ON/OFF Led Rojo");
      Serial.println("2. ON/OFF Led Amarillo");
      Serial.println("3. ON/OFF Led Verde");
    }
    if(LedRojo,HIGH)
      {
      if(input == '1')
        digitalWrite(LedRojo,LOW);
      }
    {
      
    }
  }
}
