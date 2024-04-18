/*
 * Driver_Init.h
 *
 *  Created on: Mar 14, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<Driver/Include/Driver_ADC.h>
#include<Driver/Include/Driver_GPIO.h>
#include<Driver/Include/Driver_Port.h>
#include<Driver/Include/Driver_SIM.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

#define GREEN_PIN 5
#define SENSOR_PIN 22
#define GREEN_LED 0x20U
#define LIGHT_SENSOR 0x400000U
#define RESOLUTION 2
#define LONG_SAMPLE 1
#define LOWPOWER 1
#define REFERENCE_VOLTAGTSOURCE 0
#define INPUTCHANNEL 3
#define INTERRUPT_ENABLE 1
#define CHANNEL 0
#define PRIORITY 3
#define LEVEL 900


typedef struct
{
	uint32_t resolution;
	uint32_t long_Sample;
	uint32_t low_Power;
	uint32_t reference_VoltageSource;
	uint32_t input_Channel;
	uint32_t interrupt_Enable;
	uint32_t Conversion_Complete_Flag;
	uint32_t channel;

}adc_Config;

adc_Config adc;

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void Driver_Init(void);

void config_ADC_Init(void);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_ */
