/*
 * SRC_Driver_Port.c
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<Driver/Include/Driver_Port.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void Port_Driver_config_Pin(PORT_Type* port, uint8_t pin)
{
	if(port == PORTD || port == PORTE)
	{
		Port_HAL_config_Pin(port, pin);
	}
	else
	{
		/* handler */
	}
}

void Port_Driver_config_Pull_Enable(PORT_Type* port, uint8_t pin)
{
	if(port == PORTD || port == PORTE)
	{
		Port_HAL_config_Pull_Enable(port, pin);
	}
	else
	{
		/* handler */
	}
}

void Port_Driver_config_Pull_select(PORT_Type* port, uint8_t pin)
{
	if(port == PORTD || port == PORTE)
	{
		Port_HAL_config_Pull_select(port, pin);
	}
	else
	{
		/* handler */
	}
}
