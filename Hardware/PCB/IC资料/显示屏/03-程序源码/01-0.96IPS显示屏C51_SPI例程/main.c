//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//中景园电子
//店铺地址：http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : HuangKai
//  生成日期   : 2014-0101
//  最近修改   : 
//  功能描述   : OLED 4接口演示例程(51系列)
//              说明: 
//              ----------------------------------------------------------------
//              GND    电源地
//              VCC  3.3v电源
//              SCL  P10（SCLK）
//              SDA  P11（MOSI）
//              RES  P12
//              DC   P13
//              CS   P14 
//              BLK  P15
//              ----------------------------------------------------------------
// 修改历史   :
// 日    期   : 
// 作    者   : HuangKai
// 修改内容   : 创建文件
//版权所有，盗版必究。
//Copyright(C) 中景园电子2014/3/16
//All rights reserved
//******************************************************************************/
#include "REG51.h"
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"

int main(void)
{
	float t=0;
	LCD_Init();//LCD初始化
	LCD_Fill(0,0,LCD_W,LCD_H,WHITE);
	while(1)
	{
		LCD_ShowChinese(40,0,"中景园电子",RED,WHITE,16,0);
		LCD_ShowString(10,20,"LCD_W:",RED,WHITE,16,0);
		LCD_ShowIntNum(58,20,LCD_W,3,RED,WHITE,16);
		LCD_ShowString(10,40,"LCD_H:",RED,WHITE,16,0);
		LCD_ShowIntNum(58,40,LCD_H,3,RED,WHITE,16);
		LCD_ShowFloatNum1(10,60,t,4,RED,WHITE,16);
		t+=0.11;
		LCD_ShowPicture(100,20,40,40,gImage_1);
	}
}

	