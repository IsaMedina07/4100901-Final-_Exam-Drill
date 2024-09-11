/*
 * keyboard_pass.h
 *
 *  Created on: Sep 9, 2024
 *      Author: isabe
 */

#ifndef INC_KEYBOARD_PASS_H_
#define INC_KEYBOARD_PASS_H_

#include <stdint.h>

uint8_t keypad_scan(uint16_t GPIO_Pin);
uint8_t right_buffer_ID( uint8_t *data);

#endif /* INC_KEYBOARD_PASS_H_ */
