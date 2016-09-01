/*
 * serial.h
 *
 *  Created on: Aug 31, 2016
 *      Author: brent
 */

#ifndef SERIAL_H_
#define SERIAL_H_
#include "ch.h"
#include "hal.h"

size_t serial_getline(SerialDriver *sdp, uint8_t *buf, size_t buf_len);

void system_serial_init(void);

#endif /* SERIAL_H_ */
