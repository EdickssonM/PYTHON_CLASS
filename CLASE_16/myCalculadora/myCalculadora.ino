//Sofia Alejandra Chamorro Messa
//Edicksson Miramag Lopez

char Resultado;
int pinLED = 13, m = 0;

void setup() {
  Serial.begin(9600);
  pinMode (pinLED, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    Resultado = Serial.read();
    Serial.print(Resultado);
  }

  while (m < Resultado){
    digitalWrite(pinLED,HIGH);
    delay(150);
    digitalWrite(pinLED,LOW);
    m = m + 1;
    }

}

