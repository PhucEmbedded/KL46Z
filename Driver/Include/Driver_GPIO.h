/*
 * Driver_GPIO.h
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_GPIO.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void Gpio_Driver_Config_LED(GPIO_Type* gpio, uint32_t pin);

void Gpio_Driver_SOR_LED(GPIO_Type* gpio, uint32_t pin);

void Gpio_Driver_COR_LED(GPIO_Type* gpio, uint32_t pin);

void Gpio_Driver_config_Sensor(GPIO_Type* gpio, uint32_t pin);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_H_ */
