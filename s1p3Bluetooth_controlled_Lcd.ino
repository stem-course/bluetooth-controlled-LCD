/*
Code by:
Syed Rafay Hashmi and Wardah Arshad

This is a code for Bluetooth controlled LCD

Hardware:
Can be bought from www.munphurid.com
-Arduino UNO
-HC-05 Bluetooth Module
-16 male to female wires
-16x2 LCD

Connections:

Bluetooth module and Arduino
-Connect RX of Bluetooth module to pin 1 = TX of Arduino
-Connect TX of Bluetooth module to pin 0 = RX of Arduino
-Connect VCC of Bluetooth module to 5V of Arduino
-Connect GND of Bluetooth module to GND of Arduino

LCD and Arduino
•	Connect pin 1 of LCD to GND of Arduino.
•	Connect pin 2 of LCD to 5V of Arduino.
•	Connect pin 3 of LCD to centre leg of pot. Connect one of the remaining legs of pot (potentiometer) to GND of Arduino 
and the third leg of pot to 5V of Arduino.
•	Connect pin 4 (RS) of LCD to pin 12 of Arduino.
•	Connect pin 5 (RW) of LCD to GND of Arduino.
•	Connect pin 6 (E) of LCD to pin 11 of Arduino.
•	Connect pin 11 (D4) of LCD to pin 5 of Arduino.
•	Connect pin 12 (D5) of LCD to pin 4 of Arduino.
•	Connect pin 13 (D6) of LCD to pin 3 of Arduino.
•	Connect pin 14 (D7) of LCD to pin 2 of Arduino.
•	Connect pin 15 of LCD to pin 5V of Arduino.
•	Connect pin 16 of LCD to pin GND of Arduino.

*/


#include <LiquidCrystal.h>

int RS = 12;     //connect RS of LCD to this pin
int E = 11;      //connect E of LCD to this pin
int D4 = 5;      //connect D4 of LCD to this pin
int D5 = 4;      //connect D5 of LCD to this pin
int D6 = 3;      //connect D6 of LCD to this pin
int D7 = 2;      //connect D7 of LCD to this pin
 
LiquidCrystal lcd(RS,E,D4,D5,D6,D7);
String readString;                        //Donot edit this line
 
void setup() {
  Serial.begin(9600);                     //Donot edit this line
  lcd.begin(16, 2);                     //Type of LCD 
}
 
void loop() {
  while(Serial.available()){              //Donot edit this line
    delay(50);                            //Donot edit this line
    char c=Serial.read();                 //Donot edit this line
    readString+=c;                        //Donot edit this line
  }

  if(readString.length()>0){              //Donot edit this line
    lcd.setCursor(0,0);                   //Donot edit this line
    
    lcd.print(readString);                //Donot edit this line
    
    } 
   readString="";                         //Donot edit this line
  
  }

 
