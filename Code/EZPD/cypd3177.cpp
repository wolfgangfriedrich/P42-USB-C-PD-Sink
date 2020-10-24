// CYPD3177 Arduino library
// created 20.03.2019
// Copyright (c) 2019 Wolfgnag Friedrich <wolfgangfriedrich42@gmail.com>.  All right reserved.
// Released under Creative Commons Attribution-Share Alike 4.0 International License

// Pier 42 Watt-A-Live Shield/Wing

// Last change: 2019/Oct/22

// https://www.tindie.com/stores/pier42/
// https://hackaday.io/project/166326-watt-a-live-power-monitor-shield-wing
// https://github.com/wolfgangfriedrich/P42-Watt-A-Live



#include "CYPD3177.h"
//#include <Arduino.h>



//<<constructor>> 
CYPD3177::CYPD3177(void) {

}

// read a word from the register 
word CYPD3177::readWord( byte reg_addr) {	

byte MSB = 0;
byte LSB = 0;	

	Wire.beginTransmission(CYPD3177_ADDR);      
	Wire.write(lowByte(reg_addr));
	Wire.write(highByte(reg_addr));
	Wire.endTransmission();
	Wire.beginTransmission(CYPD3177_ADDR);      
	Wire.requestFrom(CYPD3177_ADDR, 2);    // read 2 bytes from register	
	LSB = Wire.read();    
	MSB = Wire.read();    
	Wire.endTransmission();
	return word(MSB,LSB);
}

// write a word into the register pointed
void CYPD3177::writeWord( byte reg_addr , word data) {	
	Wire.beginTransmission(CYPD3177_ADDR);	
	Wire.write(lowByte(reg_addr));
	Wire.write(highByte(reg_addr));
	Wire.write(highByte(data)); 
	Wire.write(lowByte(data));  
	Wire.endTransmission();
}







