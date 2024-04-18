/*
 * SRC_Driver_ADC.c
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<Driver/Include/Driver_ADC.h>

/*******************************************************************************
 * Definition
 ******************************************************************************/

void ADC_Driver_Config_Mode(ADC_Type* adc, uint32_t pin)
{
	if(adc == ADC0 && (pin >= 0U && pin < 0xFFFFFFFFU))
	{
		ADC_HAL_Config_Mode(adc, pin);
	}
	else
	{
		/* handler */
	}
}

void ADC_Driver_Config_ADLSMP(ADC_Type* adc, uint32_t pin)
{
	if(adc == ADC0 && (pin >= 0U && pin < 0xFFFFFFFFU))
	{
		ADC_HAL_Config_ADLSMP(adc, pin);
	}
	else
	{
		/* handler */
	}
}

void ADC_Driver_Config_ADLPC(ADC_Type* adc, uint32_t pin)
{
	if(adc == ADC0 && (pin >= 0U && pin <= 0xFFFFFFFFU))
	{
		ADC_HAL_Config_ADLPC(adc, pin);
	}
	else
	{
		/* handler */
	}
}

void ADC_Driver_Config_REFSEL(ADC_Type* adc, uint32_t pin)
{
	if(adc == ADC0 && (pin >= 0U && pin < 0xFFFFFFFFU))
	{
		ADC_HAL_Config_REFSEL(adc, pin);
	}
	else
	{
		/* handler */
	}
}

void ADC_Driver_Config_ADCH(ADC_Type* adc, uint32_t pin)
{
	if(adc == ADC0 && (pin >= 0U && pin < 0xFFFFFFFFU))
	{
		ADC_HAL_Config_ADCH(adc, pin);
	}
	else
	{
		/* handler */
	}
}


void ADC_Driver_Config_AIEN(ADC_Type* adc, uint32_t pin)
{
	if(adc == ADC0 && (pin >= 0U && pin < 0xFFFFFFFFU))
	{
		ADC_HAL_Config_AIEN(adc, pin);
	}
	else
	{
		/* handler */
	}
}

uint8_t ADC_Driver_Config_COCO(ADC_Type* adc)
{
	return ADC_HAL_Config_COCO(adc);
}

void ADC_Driver_delete_COCO(ADC_Type* adc)
{
	if(adc == ADC0)
	{
		ADC_HAL_delete_COCO(adc);
	}
	else
	{
		/* handler */
	}
}

uint16_t ADC_Driver_Read_R(ADC_Type* adc, uint32_t pin)
{
	return ADC_HAL_Read_R(adc, pin);
}

void ADC_Driver_Config_Interrupt(uint8_t priority)
{
	if(priority != ADC0_IRQn)
	{
		ADC_HAL_config_Interrupt(priority);
	}
	else
	{
		/* handler */
	}
}


