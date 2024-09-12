/*
 * blinking.c
 *
 *  Created on: Sep 12, 2024
 *      Author: isabe
 */

#include "blinking.h"
#include "main.h"


void blinking_led(void){
	static uint8_t toggles = 6;
	static uint32_t turn_toggle_tick = 0;

	if (turn_toggle_tick < HAL_GetTick()) {
		if (toggles > 0) {
			turn_toggle_tick = HAL_GetTick() + 400;
			HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
			toggles--;
		} else {
			HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
		}

	}
}

uint8_t blinking_led_ret(void){
	static uint8_t toggles = 6;
		static uint32_t turn_toggle_tick = 0;

		if (turn_toggle_tick < HAL_GetTick()) {
			if (toggles > 0) {
				turn_toggle_tick = HAL_GetTick() + 400;
				HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
				toggles--;
			} else {
				HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
				return 0;
			}

		}
		return 1;
}
