#include "spi.h"



void SPI1_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	SPI_InitTypeDef SPI_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE);//ʹ��SPI1
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//ʹ��GPIOA

	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_5|GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//�ٶ�50MHz
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	 //�����������
	GPIO_Init(GPIOA, &GPIO_InitStructure); //��ʼ��GPIOA
	GPIO_SetBits(GPIOA,GPIO_Pin_5|GPIO_Pin_7);

	SPI_InitStructure.SPI_Direction = SPI_Direction_1Line_Tx;//ֻ����ģʽ
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master;//����SPI����ģʽ������ģʽ
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;//����SPI���ݴ�С��8λ֡�ṹ
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_High;//����ͬ��ʱ�ӿ���ʱSCLKλ�ߵ�ƽ
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge;//����ͬ��ʱ�ӿյڶ���ʱ���ز���
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;//NSS�ź���Ӳ������
	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_4;//������Ԥ��Ƶֵ��������Ԥ��ƵֵΪ4
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;//���ݴ����λ����
	SPI_InitStructure.SPI_CRCPolynomial = 7;//CRCֵ����Ķ���ʽ
	SPI_Init(SPI1,&SPI_InitStructure);//��ʼ��SPI
	SPI_Cmd(SPI1, ENABLE);//ʹ��SPI
}






