char domotica;
#include <Servo.h>
          Servo servoGaraje;//entrada del garaje
#include <LiquidCrystal.h>
          const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
        LiquidCrystal lcd(rs, en, d4, d5, d6, d7);//configuracion de puertos de la pantalla

float tempC;

//asignacion de pines y led`s
int luzCocina = 40;
int luzHabitacion = 31;
int luzEscalera = 26;
int luzGaraje = 42;
int LedRojo = 48;
int LedVerde = 46;
int temperatura = 30;
int sensorMovimiento = 32;
int Cocina_on=0;
int habitacion_on=0;
int escalera_on=0;
int garaje_on=0;
int todo_on=0;
int servo_on=0;
int luzLetrero = 48;
int letrero_on=0;


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
  pinMode(LedVerde,OUTPUT);//sensor
  pinMode(luzCocina, OUTPUT);
  pinMode(luzHabitacion, OUTPUT);
  pinMode(luzEscalera, OUTPUT);
  pinMode(luzGaraje, OUTPUT);
  pinMode(luzLetrero,OUTPUT);

  pinMode(temperatura, OUTPUT);
  pinMode(sensorMovimiento, OUTPUT);

// Iniciamos el servo para que empiece a trabajar con el pin 9
  servoGaraje.attach(9);
  servoGaraje.write (0); //posicion abrir
  servoGaraje.write (90); // posicion cerrar
}
 
void loop() {
   if(Serial.available()>0) 
   {
    domotica=Serial.read();
    Serial.print(domotica);
  }
    //tempC = analogRead (temperatura);
   // tempC = (5.0 * tempC * 100) / 1024.0;
   // Serial.println (tempC);
    //delay (1000);
     //}
    
      if (domotica == '1')
      { if(Cocina_on==0)
        { digitalWrite(luzCocina, HIGH);
          lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
          lcd.print("luz de la Cocina"); //mensaje superior
          lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
          lcd.print (" encendida =) "); //mensaje inferior
          Cocina_on=1;
        }else
        { digitalWrite(luzCocina, LOW);
          lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
          lcd.print("luz de la Cocina"); //mensaje superior
          lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
          lcd.print (" apagada =( "); //mensaje inferior
          Cocina_on=0;
        }
      }else{
            if (domotica == '2')
               { if (habitacion_on==0)
                {digitalWrite(luzHabitacion, HIGH);
                 lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                 lcd.print("luz de la Habitacion"); //mensaje superior
                 lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                 lcd.print (" encendida =) "); //mensaje inferior
                 habitacion_on=1;
                }else
                {digitalWrite(luzHabitacion, LOW);
                 lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                 lcd.print("luz de la Habitacion"); //mensaje superior
                 lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                 lcd.print (" apagada =( "); //mensaje inferior
                 habitacion_on=0;
                 }
        }else{ 
              if (domotica == '3')
                 {if (escalera_on==0)
                     {digitalWrite(luzEscalera, HIGH);
                      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                      lcd.print("luz de la escalera"); //mensaje superior
                      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                      lcd.print (" encendida =) "); //mensaje inferior
                      habitacion_on=1;
                     }else
                     {digitalWrite(luzEscalera, LOW);
                      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                      lcd.print("luz de la escalera"); //mensaje superior
                      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                      lcd.print (" apagada =( "); //mensaje inferior
                      habitacion_on=0;
                     }
           }else{
               if (domotica == '4')
                  {if(garaje_on==0)
                      {digitalWrite(luzGaraje, HIGH);
                       lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                       lcd.print("luz del Garaje"); //mensaje superior
                       lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                       lcd.print (" encendida =) "); //mensaje inferior
                       garaje_on=1;
                       }else
                       {digitalWrite(luzGaraje, LOW);
                        lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                        lcd.print("luz del Garaje"); //mensaje superior
                        lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                        lcd.print (" apagada =( "); //mensaje inferior
                        garaje_on=0;
                       }
           }else{
               if (domotica == '5')
                  {if(letrero_on==0)
                      {digitalWrite(luzLetrero, HIGH);
                       lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                       lcd.print("luz Letrero"); //mensaje superior
                       lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                       lcd.print (" encendida =) "); //mensaje inferior
                       letrero_on=1;
                       }else
                       {digitalWrite(luzLetrero, LOW);
                        lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                        lcd.print("luz Letrero"); //mensaje superior
                        lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                        lcd.print (" apagada =( "); //mensaje inferior
                        letrero_on=0;
                       }
         }else{
              if (domotica == '6')
                 {if(todo_on==0)
                    {digitalWrite(luzCocina,HIGH);
                     digitalWrite(luzHabitacion,HIGH);
                     digitalWrite(luzEscalera,HIGH);
                     digitalWrite(luzGaraje,HIGH);
                     lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                     lcd.print("    luces   "); //mensaje superior
                     lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                     lcd.print ("ENCENDIDAS =) "); //mensaje inferior
                     todo_on=1;
                     }else
                     {digitalWrite(luzCocina,LOW);
                      digitalWrite(luzHabitacion,LOW);
                      digitalWrite(luzEscalera,LOW);
                      digitalWrite(luzGaraje,LOW);
                      lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                      lcd.print("    luces   "); //mensaje superior
                      lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                      lcd.print ("APAGADAS =( "); //mensaje inferior
                      todo_on=0;
                      }
         }else{ 
               if (domotica == '7')
                  {if(servo_on==0)//servo garaje abrir
                      {servoGaraje.write (0);//posicion de servo en abrir
                       delay(1000); //DAMOS UN TIEMPO
                       lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                       lcd.print("puerta del garaje"); //mensaje superior
                       lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                       lcd.print (" ABIERTA =0 "); //mensaje inferior 
                       digitalWrite (LedVerde,HIGH);
                       servo_on=1;
                      }else //servo garaje cerrar
                      {servoGaraje.write (90); // posicion de servo en cerrar
                       delay(1000);
                       lcd.setCursor (0,0);//ubicacion del mensaje en la parte superior
                       lcd.print("Puerta del Garaje"); //mensaje superior
                       lcd.setCursor (0,1);//ubicacion del mensaje en la parte inferior
                       lcd.print (" CERRADA =0 ");} //mensaje inferior
                       digitalWrite (LedRojo,HIGH);
                       }
         }
         }
           }
           }
        }
      }
}
