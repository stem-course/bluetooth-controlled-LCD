/*
Code by: www.munphurid.com
Syed Rafay Hashmi and Wardah Arshad

This is a code for Bluetooth controlled Lcd

Hardware:
Is bought from www.munphurid.com
-Arduino UNO
-HC-05 Bluetooth Module
-16 male to female wires
-Lcd

Connections:

Bluetooth module and Arduino
-Connect RX of Bluetooth module to pin 1 = TX of Arduino
-Connect TX of Bluetooth module to pin 0 = RX of Arduino
-Connect VCC of Bluetooth module to 5V of Arduino
-Connect GND of Bluetooth module to GND of Arduino

LCD and Arduino
Connect VSS of Lcdpin to GND of Arduino
Connect VDD of Lcdpin to 5V of Arduino
Connect Vo/ VEE(potentiometer) of Lcdpin to GND of Arduino
Connect RS of Lcdpin to pin12 of Arduino
Connect RW of Lcdpin to GND of Arduino
Connect E of Lcdpin to pin11 of Arduino
D0 TO D3 NOT USED
Connect D4 of Lcdpin to PIN5 of Arduino
Connect D5 of Lcdpin to PIN4 of Arduino
Connect D6 of Lcdpin to PIN3 of Arduino
Connect D7 of Lcdpin to PIN2 of Arduino
Connect LED+/A of Lcdpin to 5V of Arduino
Connect LED-/K of Lcdpin to GND of Arduino
*/


#include <LiquidCrystal.h>
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);    // Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 
String readString;                        //Donot edit this line
 
void setup() {
  Serial.begin(9600);                     //Donot edit this line
  lcd.begin(16, 2);                       // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display 
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

 
