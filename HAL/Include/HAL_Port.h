/*
 * HAL_Port.h
 *
 *  Created on: Mar 12, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_PORT_H_
#define SOURCES_HAL_INCLUDE_HAL_PORT_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<MKL46Z4.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void Port_HAL_config_Pin(PORT_Type* port, uint8_t pin);

void Port_HAL_config_Pull_Enable(PORT_Type* port, uint8_t pin);

void Port_HAL_config_Pull_select(PORT_Type* port, uint8_t pin);

#endif /* SOURCES_HAL_INCLUDE_HAL_PORT_H_ */
