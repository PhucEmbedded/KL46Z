/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file Use ADC for linght sensor
 * @author Lai The Phuc  <ltphuc2022@gmail.com>
 * @brief Turn LEDs on and off as required
 * @version 0.1
 * @date 2024-3-19
 *
 * @copyright Copyright (c) 2024
 *
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "Driver/Include/Driver_Init.h"

/*******************************************************************************
 * Definition
 ******************************************************************************/

volatile uint16_t adcValue = 0;


void ADC0_IRQHandler(void)
{
	adcValue = ADC_Driver_Read_R(ADC0, adc.channel);

	ADC_Driver_delete_COCO(ADC0);
}

void init_Struct(void)
{
	adc.resolution = RESOLUTION;
	adc.long_Sample = LONG_SAMPLE;
	adc.low_Power = LOWPOWER;
	adc.reference_VoltageSource = REFERENCE_VOLTAGTSOURCE;
	adc.input_Channel = INPUTCHANNEL;
	adc.interrupt_Enable = INTERRUPT_ENABLE;
	adc.channel = CHANNEL;
}


int main(void)
{

	Driver_Init();

	init_Struct();

	config_ADC_Init();
    /* This for loop should be replaced. By default this loop allows a single stepping. */
    while(1)
    {
    	if(adcValue > LEVEL)
    	{
    		Gpio_Driver_COR_LED(GPIOD, GREEN_LED); // LED ON
    	}
    	else
    	{
    		Gpio_Driver_SOR_LED(GPIOD, GREEN_LED); // LED OFF
    	}
    }
    /* Never leave main */
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
