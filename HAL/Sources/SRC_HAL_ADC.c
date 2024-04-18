/*
 * SRC_HAL_ADC.c
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_ADC.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void ADC_HAL_Config_Mode(ADC_Type* adc, uint32_t pin)
{
	adc->CFG1 &= ~ADC_CFG1_MODE_MASK;
	adc->CFG1 |= ADC_CFG1_MODE(pin);
}

void ADC_HAL_Config_ADLSMP(ADC_Type* adc, uint32_t pin)
{
	adc->CFG1 &= ~ADC_CFG1_ADLSMP_MASK;
	adc->CFG1 |= ADC_CFG1_ADLSMP(pin);
}

void ADC_HAL_Config_ADLPC(ADC_Type* adc, uint32_t pin)
{
	adc->CFG1 &= ~ADC_CFG1_ADLPC_MASK;
	adc->CFG1 |= ADC_CFG1_ADLPC(pin);
}

void ADC_HAL_Config_REFSEL(ADC_Type* adc, uint32_t pin)
{
	adc->SC2 &= ~ADC_SC2_REFSEL_MASK;
	adc->SC2 |= ADC_SC2_REFSEL(pin);
}


void ADC_HAL_Config_ADCH(ADC_Type* adc, uint32_t pin)
{
	adc->SC1[0] &= ~ADC_SC1_ADCH_MASK;
	adc->SC1[0] |= ADC_SC1_ADCH(pin);
}


void ADC_HAL_Config_AIEN(ADC_Type* adc, uint32_t pin)
{
	adc->SC1[0] &= ~ADC_SC1_AIEN_MASK;
	adc->SC1[0] |= ADC_SC1_AIEN(pin);
}

uint8_t ADC_HAL_Config_COCO(ADC_Type* adc)
{



	return 0;
}

void ADC_HAL_delete_COCO(ADC_Type* adc)
{
	adc->SC1[0] |= ADC_SC1_COCO_MASK;
}

uint16_t ADC_HAL_Read_R(ADC_Type* adc, uint32_t pin)
{

	while(!((adc->SC1[0]) & ADC_SC1_COCO_MASK))
	{

	}

	return (adc->R[pin]);
}

void ADC_HAL_config_Interrupt(uint8_t priority)
{
	NVIC_SetPriority(ADC0_IRQn, priority);
	NVIC_EnableIRQ(ADC0_IRQn);

}
