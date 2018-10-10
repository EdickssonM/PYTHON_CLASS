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
      Serial.println("1.Encender Led Rojo");
      Serial.println("2.Apagar led Rojo");
      Serial.println("3.Encender Led Amarillo");
      Serial.println("4.Apagar led Amarillo");
      Serial.println("5.Encender Led Verde");
      Serial.println("6.Apagar led Verde");
      Serial.println("7.Encender Motor");
      Serial.println("8.Apagar Motor");
      Serial.println("9.Encender Todo");
      Serial.println("10.Apagar Todo");
    }
    if(input == '1')
    { 
      digitalWrite(LedRojo,HIGH);
    }else{
         if(input=='2')
         {
            digitalWrite(LedRojo,LOW);
         }else{
              if(input == '3')
              { 
                 digitalWrite(LedAmarillo,HIGH);
              }else{
                   if(input=='4')
                   {
                      digitalWrite(LedAmarillo,LOW);
                   }else{
                        if(input=='5')
                        {
                            digitalWrite(LedVerde,HIGH);                
                        }else{
                             if(input=='6')
                             {
                                digitalWrite(LedVerde,LOW);
                             }else{
                                  if(input=='7')
                                  {
                                    digitalWrite(Motor,HIGH);
                                  }else{
                                       if(input=='8')
                                       {
                                          digitalWrite(Motor,LOW);
                                       }else{
                                            if(input=='9')
                                            {
                                              digitalWrite(LedRojo,HIGH);
                                              digitalWrite(LedAmarillo,HIGH);
                                              digitalWrite(LedVerde,HIGH);
                                              digitalWrite(Motor,HIGH);
                                            }else{
                                                 if(input=="10") 
                                                 {
                                                   digitalWrite(LedRojo,LOW);
                                                   digitalWrite(LedAmarillo,LOW);
                                                   digitalWrite(LedVerde,LOW);
                                                   digitalWrite(Motor,LOW); 
                                                   }
                                               }
                                           }
                                      }
                                 }
                            }
                        }
                   }
              }
          }
    }  
}  
