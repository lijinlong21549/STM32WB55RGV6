//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2018-0101
//  ����޸�   : 
//  ��������   :��ʾ����(STM32F4ϵ��)
//              ˵��: 
//              ----------------------------------------------------------------
//              GND    ��Դ��
//              VCC  ��5V��3.3v��Դ
//              SCL   PG12��SCLK��
//              SDA   PD5��MOSI��
//              RES   PD4
//              DC    PD15
//              CS    PD1
//              BLK   PE8
//              ----------------------------------------------------------------
// �޸���ʷ   :
// ��    ��   : 
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//  ��������   : 2018-0101
//All rights reserved
//******************************************************************************/
#include "delay.h"
#include "sys.h"
#include "led.h"
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"


int main(void)
{ 
	float t=0;
	delay_init(168);
	LED_Init();//LED��ʼ��
	LCD_Init();//LCD��ʼ��
	LCD_Fill(0,0,LCD_W,LCD_H,WHITE);
	LED0=0;
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
