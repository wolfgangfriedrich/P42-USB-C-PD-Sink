// Cypress CYPD3177 Arduino library
// created 20.03.2019
// Copyright (c) 2019 Wolfgnag Friedrich <wolfgangfriedrich42@gmail.com>.  All right reserved.
// Released under Creative Commons Attribution-Share Alike 4.0 International License

// Pier 42 Watt-A-Live Shield/Wing

// Last change: 2019/Nov/15

// https://www.tindie.com/stores/pier42/
// https://hackaday.io/project/166326-watt-a-live-power-monitor-shield-wing
// https://github.com/wolfgangfriedrich/P42-Watt-A-Live

#ifndef CYPD3177_H
#define CYPD3177_H

#include <Arduino.h>
#include <Wire.h> 		

#define CYPD3177_ADDR		0x08		// 7 bit I2C address

						// Register Name		Function										power on reset bin	hex		type
#define DEVICE_MODE				0x0000	// Device Mode						00000000 10010020	0092	R
#define SILICON_ID				0x0002	// SILICON ID						00010001 10110000	11B0	R


// Config reg 0x00
#define RST		0x8000		// Reset bit
#define BRNG	0x2000		// Bus voltage range
#define PGA		0x1800		// Shunt voltage mask
#define BADC	0x0780		// Bus ADC Resolution/Averaging
#define SADC	0x0078		// Shunt ADC Resolution/Averaging
#define MODE	0x0007		// Operating Mode




class CYPD3177
{

//private: 
//	word readWord();
//	void writeWord(byte reg_addr , word data);

public:
	CYPD3177(void);
//	TI_INA209(byte address, float shunt);
	word	readWord (byte reg_addr );
	void	writeWord (byte reg_addr , word data);
		
};


#endif
