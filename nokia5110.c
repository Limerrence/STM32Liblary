#ifndef __LCD5110_H__		
#define __LCD5110_H__
 
#include <reg52.h>
#include "common.h"
 
 
sbit LCD5110_RST_bit = P1^0;	/*����Ӳ������ѡ��*/
sbit LCD5110_CE_bit	 = P1^1;	/*����Ӳ������ѡ��*/
sbit LCD5110_DC_bit	 = P1^2;	/*����Ӳ������ѡ��*/
sbit LCD5110_SDIN_bit= P1^3;	/*����Ӳ������ѡ��*/
sbit LCD5110_SCLK_bit= P1^4;	/*����Ӳ������ѡ��*/
 
#define LCD5110_DC_DATA 	HIGH_LEVEL
#define LCD5110_DC_COMMAND  LOW_LEVEL
 
#define LCD5110_X_AXIS_START_ADDRESS 0x80
#define LCD5110_Y_AXIS_START_ADDRESS 0x40
 
 
/*****************�ⲿ�ӿں���******************/
//����
extern void LCD5110ClearAll(void) ;
 
//��ʼ��
extern void LCD5110Init(void) ;
 
//��ַд����
extern void LCD5110AddressWriteWord(UB8 x,UB8 y, UB8 const  *WCP,UB8 uintLong,UB8 uintNumber,UW16 index);
 
//��ַ��ͼ
extern void LCD5110AddressWritePicture(UB8 x,UB8 y,UB8 *PCP,UB8 uintLong,UB8 uintNumber,UW16 index) ;
/**********************************************/
 
 
#endif /*__LCD5110_H__*/