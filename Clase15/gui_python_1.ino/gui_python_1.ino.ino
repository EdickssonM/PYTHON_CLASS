char serialData;
int pinLed=13;
//int pinLed=7;
//int pinLed=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) {
    serialData=Serial.read();
    Serial.print(serialData);

    if(serialData == '1') {
      digitalWrite(pinLed,HIGH);
    }else {
      if(serialData =='0'){
        digitalWrite(pinLed,LOW);
      }
    }
  }
}
