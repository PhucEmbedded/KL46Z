/*
 * SRC_Driver_Init.c
 *
 *  Created on: Mar 14, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<Driver/Include/Driver_Init.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void Driver_Init(void)
{
	SIM_Driver_config_LED(SIM);

	SIM_Driver_Config_ADC(SIM);

	Port_Driver_config_Pin(PORTD, GREEN_PIN);

	Port_Driver_config_Pin(PORTE, SENSOR_PIN);

	//Port_Driver_config_Pull_Enable(PORTE, SENSOR_PIN);

	//Port_Driver_config_Pull_select(PORTE, SENSOR_PIN);

	Gpio_Driver_Config_LED(GPIOD, GREEN_LED);

	Gpio_Driver_config_Sensor(GPIOE, LIGHT_SENSOR);
}

void config_ADC_Init(void)
{

	ADC_Driver_Config_Mode(ADC0, adc.resolution);


	ADC_Driver_Config_ADLSMP(ADC0, adc.long_Sample);


	ADC_Driver_Config_ADLPC(ADC0, adc.low_Power);


	ADC_Driver_Config_REFSEL(ADC0, adc.reference_VoltageSource);


	ADC_Driver_Config_ADCH(ADC0, adc.input_Channel);


	ADC_Driver_Config_AIEN(ADC0, adc.interrupt_Enable);


	ADC_Driver_Config_Interrupt(PRIORITY);
}
