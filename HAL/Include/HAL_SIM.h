/*
 * HAL_SIM.h
 *
 *  Created on: Mar 12, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_SIM_H_
#define SOURCES_HAL_INCLUDE_HAL_SIM_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<MKL46Z4.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void SIM_HAL_config_LED(SIM_Type* sim);

void SIM_HAL_Config_ADC(SIM_Type* sim);

#endif /* SOURCES_HAL_INCLUDE_HAL_SIM_H_ */
