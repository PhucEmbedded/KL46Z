/*
 * SRC_Driver_SIM.c
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<Driver/Include/Driver_SIM.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void SIM_Driver_config_LED(SIM_Type* sim)
{
	if(sim == SIM)
	{
		SIM_HAL_config_LED(sim);
	}
	else
	{
		/* handler */
	}
}

void SIM_Driver_Config_ADC(SIM_Type* sim)
{
	if(sim == SIM)
	{
		SIM_HAL_Config_ADC(sim);
	}
	else
	{
		/* handler */
	}
}
