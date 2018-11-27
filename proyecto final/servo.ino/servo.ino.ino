char domotica;
#include <Servo.h>
          Servo servoGaraje;//entrada del garaje
#include <LiquidCrystal.h>
          LiquidCrystal lcd(7,6,5,4,3,2)//configuracion de puertos de la pantalla

//asignacion de pines y led`s
const int luzSala = 22;
const int luzBaño = 24;
const int luzEscalera = 26;
const int luzGaraje = 28;
const int temperatura = 30;
const int sensorMovimiento = 32;

void setup() {
  Serial.begin(9600);//comunicacion serial recibe datos

  //configuracion de pantalla led
  //Definir las dimensiones del LCD (16x2)
  //y los caracteres que deben salir en las lineas
  lcd.begin(16,2);
  lcd.print("Temperatura");
  lcd.setCursor(0,1);
  lcd.print ("C=");

  //configuramos los pines de los led`s, lcd y sensores
  pinMode(LedRojo,OUTPUT);//sensor
  pinMode(LedAmarillo,OUTPUT);//sensor
  pinMode(luzSala, OUTPUT);
  pinMode(luzBaño, OUTPUT);
  pinMode(luzEscalera, OUTPUT);
  pinMode(luzGaraje, OUTPUT);

  pinMode(temperatura, OUTPUT)
  pinMode(sensorMovimiento, OUTPUT);

// Iniciamos el servo para que empiece a trabajar con el pin 9
  servoGaraje.attach(9);
  servoGaraje.write (90); //posicion abrir
  servoGaraje.write (0); // posicion cerrar
}
 
void loop() {
   if(Serial.available()>0) {
    domotica=Serial.read();
    Serial.print(domotica);

    tempC = analogRead (pinSensorT);
    tempC = (5.0 * tempC * 100) / 1024.0;
    Serial.println (tempC);
    delay (1000);
    if (tempC >= 30){
    digitalWrite(LedRojo,HIGH);
    digitalWrite(LedAmarillo,LOW);
    }else{
    digitalWrite(LedAmarillo,HIGH);
    digitalWrite(LedRojo,LOW);

    else if  (domotica == '1'){
      digitalWrite(luzSala, HIGH)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz de la sala"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" encendida =) ");} //mensaje inferior

    else if  (domotica == '1'){
      digitalWrite(luzSala, LOW)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz de la sala"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" apagada =( ");} //mensaje inferior

    else if (domotica == '2'){
      digitalWrite(luzBaño, HIGH)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz del Baño"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" encendida =) ");} //mensaje inferior

    else if (domotica == '2'){
      digitalWrite(luzBaño, LOW)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz del Baño"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" apagada =( ");} //mensaje inferior

    else if (domotica == '3'){
      digitalWrite(luzEscalera, HIGH)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz de la escalera"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" encendida =) ");} //mensaje inferior

    else if (domotica == '3'){
      digitalWrite(luzEscalera, LOW)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz de la escalera"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" apagada =( ");} //mensaje inferior

    else if (domotica == '4'){
      digitalWrite(luzGaraje, HIGH)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz del Garaje"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" encendida =) ");} //mensaje inferior

    else if (domotica == '4'){
      digitalWrite(luzGaraje, LOW)
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("luz del Garaje"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" apagada =( ");} //mensaje inferior

    else if (domotica == '5'){ //encender todas laz luces
      digitalWrite(luzSala,HIGH);
      digitalWrite(luzBaño,HIGH);
      digitalWrite(luzEscalera,HIGH);
      digitalWrite(luzGaraje,HIGH);
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("    luces   "); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print ("ENCENDIDAS =) ");} //mensaje inferior

    else if (domotica == '5'){ //apagar todas las luces
      digitalWrite(LedRojo,LOW);
      digitalWrite(LedAmarillo,LOW);
      digitalWrite(LedVerde,LOW);
      digitalWrite(Motor,LOW);
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("    luces   "); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print ("APAGADAS =( ");} //mensaje inferior

    else if (domotica == '6') { //servo garaje abrir
      servoGaraje.write (90);//posicion de servo en abrir
      delay(1000); //DAMOS UN TIEMPO
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("puerta del garaje"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" ABIERTA =0 ");} //mensaje inferior

    else if (domotica == '6' { //servo garaje cerrar
      servoGaraje.write (0); // posicion de servo en cerrar
      delay(1000);
      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
      lcd.print("Puerta del Garaje"); //mensaje superior
      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
      lcd.print (" CERRADA =0 ");} //mensaje inferior




      
    }

      }
    }
  
  // Desplazamos a la posición 0º
  servoGaraje.write(0);
  // Esperamos 1 segundo
  delay(1000);
  
  // Desplazamos a la posición 90º
  servoGaraje.write(90);
  // Esperamos 1 segundo
  delay(1000);
  
  // Desplazamos a la posición 180º
  servoGaraje.write(180);
  // Esperamos 1 segundo
  delay(1000);
}
