/*
 * blinking_led.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Paulina Ruíz
 */
#include "blinking_led.h"
#include "main.h"

uint8_t toggles = 6;

uint8_t blinking_led(void){

	uint8_t led = 0xFF;

	if (is_correct){ //verifica si la clave es correcta con la bandera is_correct
			 toggles = 6;

		static uint8_t blinking = 0;
		if (blinking < HAL_GetTick() && toggles > 0){
				blinking = HAL_GetTick()+250;
				HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
				toggles--;
		}

		led = 1;

	}else{
		HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
		led = 0;
	}

	return led;
}

