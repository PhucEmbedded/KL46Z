/*
 * Driver_Port.h
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_PORT_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_PORT_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_Port.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void Port_Driver_config_Pin(PORT_Type* port, uint8_t pin);

void Port_Driver_config_Pull_Enable(PORT_Type* port, uint8_t pin);

void Port_Driver_config_Pull_select(PORT_Type* port, uint8_t pin);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_PORT_H_ */
