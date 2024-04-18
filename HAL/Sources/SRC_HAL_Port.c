/*
 * SRC_HAL_Port.c
 *
 *  Created on: Mar 12, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_Port.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void Port_HAL_config_Pin(PORT_Type* port, uint8_t pin)
{
	port->PCR[pin] &= ~PORT_PCR_MUX_MASK;
	port->PCR[pin] |= PORT_PCR_MUX(1);
}

void Port_HAL_config_Pull_Enable(PORT_Type* port, uint8_t pin)
{
	//port->PCR[pin] = PORT_PCR_IRQC(0xAU);
	port->PCR[pin] |= PORT_PCR_PE(1);
}

void Port_HAL_config_Pull_select(PORT_Type* port, uint8_t pin)
{
	port->PCR[pin] &= ~PORT_PCR_PS_MASK;
	port->PCR[pin] |= PORT_PCR_PS(1);
}
