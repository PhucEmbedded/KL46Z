/*
 * HAL_GPIO.h
 *
 *  Created on: Mar 12, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_GPIO_H_
#define SOURCES_HAL_INCLUDE_HAL_GPIO_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<MKL46Z4.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void Gpio_HAL_Config_LED(GPIO_Type* gpio, uint32_t pin);

void Gpio_HAL_SOR_LED(GPIO_Type* gpio, uint32_t pin);

void Gpio_HAL_COR_LED(GPIO_Type* gpio, uint32_t pin);

void Gpio_HAL_config_Sensor(GPIO_Type* gpio, uint32_t pin);

#endif /* SOURCES_HAL_INCLUDE_HAL_GPIO_H_ */
