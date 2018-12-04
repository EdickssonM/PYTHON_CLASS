#include <Servo.h>
          Servo servoGaraje;

int pinled=13;
int pinServo = 0;
int valorServo =0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinled, OUTPUT);
  Serial.begin (9600);
  servoGaraje.attach(9);
  servoGaraje.write (0); //posicion abrir
  servoGaraje.write (90); // posicion cerrar
}

void loop() {
  // put your main code here, to run repeatedly:
  
  servoGaraje.write (90);
  valorServo=analogRead (pinServo);
  Serial.println(valorServo);
  if(valorServo <20)
  {
    servoGaraje.write (0);
  }
  delay(100);
  }
