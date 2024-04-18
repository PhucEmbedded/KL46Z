/*
 * HAL_ADC.h
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_ADC_H_
#define SOURCES_HAL_INCLUDE_HAL_ADC_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<MKL46Z4.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void ADC_HAL_Config_Mode(ADC_Type* adc, uint32_t pin);


void ADC_HAL_Config_ADLSMP(ADC_Type* adc, uint32_t pin);


void ADC_HAL_Config_ADLPC(ADC_Type* adc, uint32_t pin);


void ADC_HAL_Config_REFSEL(ADC_Type* adc, uint32_t pin);


void ADC_HAL_Config_ADCH(ADC_Type* adc, uint32_t pin);


void ADC_HAL_Config_AIEN(ADC_Type* adc, uint32_t pin);


uint8_t ADC_HAL_Config_COCO(ADC_Type* adc);


void ADC_HAL_delete_COCO(ADC_Type* adc);


uint16_t ADC_HAL_Read_R(ADC_Type* adc, uint32_t pin);


void ADC_HAL_config_Interrupt(uint8_t priority);

#endif /* SOURCES_HAL_INCLUDE_HAL_ADC_H_ */
