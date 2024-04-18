/*
 * SRC_HAL_GPIO.c
 *
 *  Created on: Mar 12, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_GPIO.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void Gpio_HAL_Config_LED(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PDDR |= GPIO_PDDR_PDD(pin);
}

void Gpio_HAL_SOR_LED(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PSOR |= GPIO_PSOR_PTSO(pin);
}

void Gpio_HAL_COR_LED(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PCOR |= GPIO_PCOR_PTCO(pin);
}


void Gpio_HAL_config_Sensor(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PDDR &= ~GPIO_PDDR_PDD(pin);
}
