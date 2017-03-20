//done by T SAI RUTHVIK
//3 color LED Change

#include <SoftwareSerial.h>
SoftwareSerial BT(8, 12); 
// creates a "virtual" serial port/UART
// connect BT module TX to D10
// connect BT module RX to D11
// connect BT Vcc to 5V, GND to GND

//int DC = 0.0019/100;
float Ton = 50;
float Ton1 = 900;
float Ton2 = 500;
float Ton3 = 100;
//int Toff = Ton/DC-Ton;
float Tperiod = 1000;
//long Tperiod = 1000000;
float Toff = Tperiod - Ton;
float Toff1 = Tperiod - Ton1;
float Toff2 = Tperiod - Ton2;
float Toff3 = Tperiod - Ton3;
//float Toff= (Tperiod - Ton)/1000;
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
 
void setup() {
 //Serial.begin(4800);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  // set the data rate for the SoftwareSerial port
  BT.begin(9600);
  // Send test message to other device
  BT.println("Hello from Arduino");
}
char a;

void loop(){

 if (BT.available())
  // if text arrived in from BT serial...
  {
    a=(BT.read());
   } 
    else;
    {
    if (a=='1')
    {
      //Serial.println(Toff);
  analogWrite(redPin,255);
  //delayMicroseconds(Ton);
  delay(Ton1);
  analogWrite(redPin, 0);
  //delayMicroseconds(Toff);
  delay(Toff1);
  BT.println("Ton=900");
  return;
  }

    
    
    if (a=='2')
    {
      //Serial.println(Toff);
  analogWrite(redPin,255);
  //delayMicroseconds(Ton);
  delay(Ton2);
  analogWrite(redPin, 0);
  //delayMicroseconds(Toff);
  delay(Toff2);
  BT.println("Ton=500");
   return;
    }
    
    if (a=='3')
    {
      //Serial.println(Toff);
  analogWrite(redPin,255);
  //delayMicroseconds(Ton);
  delay(Ton3);
  analogWrite(redPin, 0);
  //delayMicroseconds(Toff);
  delay(Toff3);
  BT.println("Ton=100");
    return;
    }

     if (a=='4')
    {
      //Serial.println(Toff);
  analogWrite(greenPin,255);
  //delayMicroseconds(Ton);
  delay(Ton1);
  analogWrite(greenPin, 0);
  //delayMicroseconds(Toff);
  delay(Toff1);
  BT.println("Ton=900");
    return;
    }

     if (a=='5')
    {
      //Serial.println(Toff);
  analogWrite(greenPin,255);
  //delayMicroseconds(Ton);
  delay(Ton2);
  analogWrite(greenPin, 0);
  //delayMicroseconds(Toff);
  delay(Toff2);
  BT.println("Ton=500");
    return;
    }

     if (a=='6')
    {
      //Serial.println(Toff);
  analogWrite(greenPin,255);
  //delayMicroseconds(Ton);
  delay(Ton3);
  analogWrite(greenPin, 0);
  //delayMicroseconds(Toff);
  delay(Toff3);
  BT.println("Ton=100");
    return;
    }

     if (a=='7')
    {
      //Serial.println(Toff);
  analogWrite(bluePin,255);
  //delayMicroseconds(Ton);
  delay(Ton1);
  analogWrite(bluePin, 0);
  //delayMicroseconds(Toff);
  delay(Toff1);
  BT.println("Ton=900");
    return;
    }

     if (a=='8')
    {
      //Serial.println(Toff);
  analogWrite(bluePin,255);
  //delayMicroseconds(Ton);
  delay(Ton2);
  analogWrite(bluePin, 0);
  //delayMicroseconds(Toff);
  delay(Toff2);
  BT.println("Ton=500");
    return;
    }

     if (a=='9')
    {
      //Serial.println(Toff);
  analogWrite(bluePin,255);
  //delayMicroseconds(Ton);
  delay(Ton3);
  analogWrite(bluePin, 0);
  //delayMicroseconds(Toff);
  delay(Toff3);
  BT.println("Ton=100");
    return;
    }
 }
  
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
