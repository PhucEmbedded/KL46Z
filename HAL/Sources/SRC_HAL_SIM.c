/*
 * SRC_HAL_SIM.c
 *
 *  Created on: Mar 12, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_SIM.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void SIM_HAL_config_LED(SIM_Type* sim)
{
	sim->SCGC5 |= SIM_SCGC5_PORTD(1);
}

void SIM_HAL_Config_ADC(SIM_Type* sim)
{
	sim->SCGC6 = SIM_SCGC6_ADC0(1);
	sim->SCGC5 |= SIM_SCGC5_PORTE(1);
}
