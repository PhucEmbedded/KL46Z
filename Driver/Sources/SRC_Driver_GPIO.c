/*
 * SRC_Driver_GPIO.c
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<Driver/Include/Driver_GPIO.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void Gpio_Driver_Config_LED(GPIO_Type* gpio, uint32_t pin)
{
	if(gpio == GPIOD && (pin > 0U && pin < 0xFFFFFFFFU))
	{
		Gpio_HAL_Config_LED(gpio, pin);
	}
	else
	{
		/* handler */
	}
}

void Gpio_Driver_SOR_LED(GPIO_Type* gpio, uint32_t pin)
{
	if(gpio == GPIOD && (pin > 0U && pin < 0xFFFFFFFFU))
	{
		Gpio_HAL_SOR_LED(gpio, pin);
	}
	else
	{
		/* handler */
	}
}

void Gpio_Driver_COR_LED(GPIO_Type* gpio, uint32_t pin)
{
	if(gpio == GPIOD && (pin > 0U && pin < 0xFFFFFFFFU))
	{
		Gpio_HAL_COR_LED(gpio, pin);
	}
	else
	{
		/* handler */
	}
}

void Gpio_Driver_config_Sensor(GPIO_Type* gpio, uint32_t pin)
{
	if(gpio == GPIOE && (pin > 0U && pin < 0xFFFFFFFFU))
	{
		Gpio_HAL_config_Sensor(gpio, pin);
	}
	else
	{
		/* handler */
	}
}
