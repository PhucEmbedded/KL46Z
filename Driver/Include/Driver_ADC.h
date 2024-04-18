/*
 * Driver_ADC.h
 *
 *  Created on: Mar 13, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_ADC_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_ADC_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_ADC.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/


void ADC_Driver_Config_Mode(ADC_Type* adc, uint32_t pin);


void ADC_Driver_Config_ADLSMP(ADC_Type* adc, uint32_t pin);


void ADC_Driver_Config_ADLPC(ADC_Type* adc, uint32_t pin);


void ADC_Driver_Config_REFSEL(ADC_Type* adc, uint32_t pin);


void ADC_Driver_Config_ADCH(ADC_Type* adc, uint32_t pin);


void ADC_Driver_Config_AIEN(ADC_Type* adc, uint32_t pin);


uint8_t ADC_Driver_Config_COCO(ADC_Type* adc);


void ADC_Driver_delete_COCO(ADC_Type* adc);


uint16_t ADC_Driver_Read_R(ADC_Type* adc, uint32_t pin);


void ADC_Driver_Config_Interrupt(uint8_t priority);


#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_ADC_H_ */
