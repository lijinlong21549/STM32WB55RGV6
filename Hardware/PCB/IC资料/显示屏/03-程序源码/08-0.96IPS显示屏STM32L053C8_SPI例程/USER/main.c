//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2018-0101
//  ����޸�   : 
//  ��������   :
//              ˵��: 
//              ----------------------------------------------------------------
//              GND  ��Դ��
//              VCC  3.3v��Դ
//              SCL   PA0��SCLK��
//              SDA   PA1��MOSI��
//              RES   PA2
//              DC    PA3
//              CS    PA4
//              BLK   PA5
//              ----------------------------------------------------------------
// �޸���ʷ   :
// ��    ��   : 
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2018
#include "main.h"
#include "delay.h"
#include "sys.h"
#include "led.h"
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"


int main(void)
{
	float t=0;
	HAL_Init();
	SystemClock_Config();
	LED_Init();//LED��ʼ��
	LCD_Init();//LCD��ʼ��
	LCD_Fill(0,0,LCD_W,LCD_H,WHITE);
	LED_ON;
	while(1)
	{
		LCD_ShowChinese(40,0,"�о�԰����",RED,WHITE,16,0);
		LCD_ShowString(10,20,"LCD_W:",RED,WHITE,16,0);
		LCD_ShowIntNum(58,20,LCD_W,3,RED,WHITE,16);
		LCD_ShowString(10,40,"LCD_H:",RED,WHITE,16,0);
		LCD_ShowIntNum(58,40,LCD_H,3,RED,WHITE,16);
		LCD_ShowFloatNum1(10,60,t,4,RED,WHITE,16);
		t+=0.11;
		LCD_ShowPicture(100,20,40,40,gImage_1);
	}
}
