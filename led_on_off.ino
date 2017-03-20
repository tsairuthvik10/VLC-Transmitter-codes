//done by T SAI RUTHVIK
// controlling an led from an android phone using bluetooth

char BTvalue;           //value sent over via bluetooth
char lastValue;              //stores last state of device (on/off)
 
void setup()
{
 Serial.begin(9600); 

 pinMode(13,OUTPUT);
}
 
 
void loop()
{
  if(Serial.available())
  {//if there is data being recieved
    BTvalue=Serial.read(); //read it
  }
  if (BTvalue=='n')
  {//if value from bluetooth serial is n
    digitalWrite(13,HIGH);       //switch on LED
    if (lastValue!='n')
      Serial.println(F("LED is on")); //print LED is on
    lastValue=BTvalue;
  }
  else if (BTvalue=='f')
  {//if value from bluetooth serial is n
            //turn off LED
    digitalWrite(13,LOW);
    if (lastValue!='f')
      Serial.println(F("LED is off")); //print LED is on
    lastValue=BTvalue;
  }
  delay(1250);
}
