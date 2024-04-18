/*
 * Driver_SIM.h
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_SIM_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_SIM_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_SIM.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void SIM_Driver_config_LED(SIM_Type* sim);

void SIM_Driver_Config_ADC(SIM_Type* sim);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_SIM_H_ */
