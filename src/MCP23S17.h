#ifndef _MCP23S17_H
#define _MCP23S17_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define WRITE_CMD 0
#define READ_CMD 1

	// Register addresses
#define IODIRA 0x00  // I/O direction A
#define IODIRB 0x01  // I/O direction B
#define IPOLA 0x02  // I/O polarity A
#define IPOLB 0x03  // I/O polarity B
#define GPINTENA 0x04  // interrupt enable A
#define GPINTENB 0x05  // interrupt enable B
#define DEFVALA 0x06  // register default value A (interupts)
#define DEFVALB 0x07  // register default value B (interupts)
#define INTCONA 0x08  // interrupt control A
#define INTCONB 0x09  // interrupt control B
#define IOCON 0x0A  // I/O config (also 0x0B)
#define GPPUA 0x0C  // port A pullups
#define GPPUB 0x0D  // port B pullups
#define INTFA 0x0E  // interrupt flag A (where the interupt came from)
#define INTFB 0x0F  // interrupt flag B
#define INTCAPA 0x10  // interrupt capture A (value at interupt is saved here)
#define INTCAPB 0x11  // interrupt capture B
#define GPIOA 0x12  // port A
#define GPIOB 0x13  // port B
#define OLATA 0x14  // output latch A
#define OLATB 0x15  // output latch B

	// I/O config
#define BANK_OFF 0x00  // addressing mode
#define BANK_ON 0x80
#define INT_MIRROR_ON 0x40  // interupt mirror (INTa|INTb)
#define INT_MIRROR_OFF 0x00
#define SEQOP_OFF 0x20  // incrementing address pointer
#define SEQOP_ON 0x00
#define DISSLW_ON 0x10  // slew rate
#define DISSLW_OFF 0x00
#define HAEN_ON 0x08  // hardware addressing
#define HAEN_OFF 0x00
#define ODR_ON 0x04  // open drain for interrupts
#define ODR_OFF 0x00
#define INTPOL_HIGH 0x02  // interrupt polarity
#define INTPOL_LOW 0x00

#define GPIO_INTERRUPT_PIN 25

// control byte and configuration register information
// control byte: "0100 A2 A1 A0 R/W" -- W = 0

#define OPCODEW (0b01000000)

// Opcode for MCP23S17 with LSB (bit0) set to write (0),

#define OPCODER (0b01000001)

// Opcode for MCP23S17 with LSB (bit0) set to read (1),

#ifdef __cplusplus
}
#endif

#endif#pragma once
#pragma once
