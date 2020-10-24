// CYPD3177 Arduino Demo sketch
// created 20.03.2019
// Copyright (c) 2019 Wolfgnag Friedrich <wolfgangfriedrich42@gmail.com>.  All right reserved.
// Released under Creative Commons Attribution-Share Alike 4.0 International License

// Pier 42 Watt-A-Live Shield/Wing

// Last change: 2019/Nov/15

// https://www.tindie.com/stores/pier42/
// https://hackaday.io/project/166326-watt-a-live-power-monitor-shield-wing
// https://github.com/wolfgangfriedrich/P42-Watt-A-Live

//#define SoftSer

#include <Wire.h>		// I2C library 
//#include <Serial.h>		// UART library 
#include "CYPD3177.h"
#ifdef SoftSer
 #include <SoftwareSerial.h>

 SoftwareSerial mySerial(4, 5); // RX, TX
#endif

CYPD3177 cypd3177_08 ;

void setup() {


	Wire.begin();
	Wire.setClock(10000);
	Serial.begin(115200);

	
#ifdef SoftSer
	mySerial.begin(38400);
	mySerial.println("Hello, world?");
#endif
	
	delay(1000);
	

	Serial.println(F(" Cypress CYPD3177 (BCR) Demo\r\n"));
#ifdef SoftSer
	mySerial.println(F(" Cypress CYPD3177 (BCR) Demo\r\n"));
#endif
	
	Serial.print(F(" CYPD3177 Slave Addr : "));
	Serial.println( CYPD3177_ADDR, HEX );
	
	Serial.println("");

}	// end setup


void loop() {

uint16_t value = 0;
uint8_t i;
byte incomingByte = 0;



	value = cypd3177_08.readWord ( SILICON_ID );


		Serial.print(F(" Silicon ID        : "));
		Serial.print( value );
		Serial.print(F(" 0x"));
		Serial.println( value, HEX );


  Serial.println(F("Press Key to Start!"));		// This is to stop the program when a new one is compiling and overwrite the content
  while (Serial.available() == 0) {};
  incomingByte = Serial.read();


}	// end loop