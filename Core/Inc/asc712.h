#include "main.h"
#include "adc.h"
#include "gpio.h"
#include <stdio.h>

#define start_adc1()  HAL_ADC_Start(&hadc1);
#define conversion_adc1() HAL_ADC_PollForConversion(&hadc1,100);
#define adc1_strob() start_adc1() conversion_adc1();
#define start_adc2() HAL_ADC_Start(&hadc2);
#define conversion_adc2() HAL_ADC_PollForConversion(&hadc1,100);
#define adc2_strob() start_adc2() conversion_adc2();


/**************************инициализация переменных**************************************/
char trans_str[64] = {0, };
uint16_t adc1[4] = {0,};
uint16_t adc2[5] = {0,};
float sensitivity = 0.1; // 0.1 ДО 20A
uint16_t current_buffer_IN0 [1];
uint16_t current_buffer_IN1 [1];
uint16_t current_buffer_IN2 [1];
uint16_t current_buffer_IN3 [1];
uint16_t current_buffer_IN4 [1];
uint16_t current_buffer_IN5 [1];
uint16_t current_buffer_IN6 [1];
uint16_t current_buffer_IN7 [1];
uint16_t current_buffer_IN8 [1];
/**************************инициализация переменных**************************************/
void survey_adc1_channel_IN0(void)//опрос ADC1 канала IN0
{
	float rawVoltage_adc1_IN0;
	float current_adc1_IN0 = 0;
	adc1[1]=0;
	adc1_strob();
	adc1[1] = HAL_ADC_GetValue(&hadc1);
	rawVoltage_adc1_IN0 = (float) adc1[1] * 3.3 * 2 / 4095;
	current_adc1_IN0 = (rawVoltage_adc1_IN0 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc1_IN0);
	uint16_t current_buffer_IN0 [0] = current_adc1_IN0; 
}
void survey_adc1_channel_IN1(void)//опрос ADC1 канала IN1
{
	float rawVoltage_adc1_IN1;
	float current_adc1_IN1 = 0;
	adc1[2]=0;
	adc1_strob();
	adc1[2] = HAL_ADC_GetValue(&hadc1);
	rawVoltage_adc1_IN1 = (float) adc1[2] * 3.3 * 2 / 4095;
	current_adc1_IN1 = (rawVoltage_adc1_IN1 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc1_IN1);
	uint16_t current_buffer_IN1 [0] = current_adc1_IN1; 
}
void survey_adc1_channel_IN2(void)//опрос ADC1 канала IN2
{
	float rawVoltage_adc1_IN2;
	float current_adc1_IN2 = 0;
	adc1[3]=0;
	adc1_strob();
	adc1[3] = HAL_ADC_GetValue(&hadc1);
	rawVoltage_adc1_IN2 = (float) adc1[3] * 3.3 * 2 / 4095;
	current_adc1_IN2 = (rawVoltage_adc1_IN2 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc1_IN2);
	uint16_t current_buffer_IN2 [0] = current_adc1_IN2; 
}
void survey_adc1_channel_IN3(void)//опрос ADC1 канала IN3
{
	float rawVoltage_adc1_IN3;
	float current_adc1_IN3 = 0;
	adc1[4]=0;
	adc1_strob();
	adc1[4] = HAL_ADC_GetValue(&hadc1);
	rawVoltage_adc1_IN3 = (float) adc1[4] * 3.3 * 2 / 4095;
	current_adc1_IN3 = (rawVoltage_adc1_IN3 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc1_IN3);
	uint16_t current_buffer_IN3 [0] = current_adc1_IN3; 
}
void survey_adc2_channel_IN4(void)//опрос ADC2 канала IN4
{
	float rawVoltage_adc2_IN4;
	float current_adc2_IN4 = 0;
	adc2[1]=0;
	adc2_strob();
	adc2[1] = HAL_ADC_GetValue(&hadc2);
	rawVoltage_adc2_IN4 = (float) adc2[1] * 3.3 * 2 / 4095;
	current_adc2_IN4 = (rawVoltage_adc2_IN4 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc2_IN4);
	uint16_t current_buffer_IN4 [0] = current_adc2_IN4; 
}
void survey_adc2_channel_IN5(void)//опрос ADC2 канала IN5
{
	float rawVoltage_adc2_IN5;
	float current_adc2_IN5 = 0;
	adc2[2]=0;
	adc2_strob();
	adc2[2] = HAL_ADC_GetValue(&hadc2);
	rawVoltage_adc2_IN5 = (float) adc2[2] * 3.3 * 2 / 4095;
	current_adc2_IN5 = (rawVoltage_adc2_IN5 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc2_IN5);
	uint16_t current_buffer_IN5 [0] = current_adc2_IN5; 
}
void survey_adc2_channel_IN6(void)//опрос ADC2 канала IN6
{
	float rawVoltage_adc2_IN6;
	float current_adc2_IN6 = 0;
	adc2[3]=0;
	adc2_strob();
	adc2[3] = HAL_ADC_GetValue(&hadc2);
	rawVoltage_adc2_IN6 = (float) adc2[3] * 3.3 * 2 / 4095;
	current_adc2_IN6 = (rawVoltage_adc2_IN6 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc2_IN6);
	uint16_t current_buffer_IN6 [0] = current_adc2_IN6; 
}
void survey_adc2_channel_IN7(void)//опрос ADC2 канала IN7
{
	float rawVoltage_adc2_IN7;
	float current_adc2_IN7 = 0;
	adc2[4]=0;
	adc2_strob();
	adc2[4] = HAL_ADC_GetValue(&hadc2);
	rawVoltage_adc2_IN7 = (float) adc2[4] * 3.3 * 2 / 4095;
	current_adc2_IN7 = (rawVoltage_adc2_IN7 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc2_IN7);
	uint16_t current_buffer_IN7 [0] = current_adc2_IN7; 
}
void survey_adc2_channel_IN8(void)//опрос ADC2 канала IN8
{
	float rawVoltage_adc2_IN8;
	float current_adc2_IN8 = 0;
	adc2[5]=0;
	adc2_strob();
	adc2[5] = HAL_ADC_GetValue(&hadc2);
	rawVoltage_adc2_IN8 = (float) adc2[5] * 3.3 * 2 / 4095;
	current_adc2_IN8 = (rawVoltage_adc2_IN8 - 2.5)/sensitivity;
	snprintf(trans_str, 63, "CURRENT %f\n", current_adc2_IN8);
	uint16_t current_buffer_IN8 [0] = current_adc2_IN8; //буфер
}

