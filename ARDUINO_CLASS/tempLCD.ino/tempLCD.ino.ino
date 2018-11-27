//Temperatura en LCD 16x2
#include <LiquidCrystal.h>

//declarar LCD y pines
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  //Definir las dimensiones del LCD (16x2)
  //y los caracteres que deben salir en las lineas
  lcd.begin(16,2);
  lcd.print("Temperatura");
  lcd.setCursor(0,1);
  lcd.print ("C=");

}

void loop() {
  float centigrados = leerGradosC();
  //Visualizar por pantalla los grados
  lcd.setCursor(2,1);
  lcd.print(centigrados);
  //Tiempo y cambio de visualizacion de la temperatura
  delay(1000);

}
float leerGradosC(){
  int dato;
  float c;
  //Leer datos de la temperatura
  dato=analogRead(A0);
  //Convertir dato de entrada en grados C.
  c = (500.0 * dato / 1024);
  return c;
}

