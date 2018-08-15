#ifndef __LCD5110_H__		
#define __LCD5110_H__
 
#include <reg52.h>
#include "common.h"
 
 
sbit LCD5110_RST_bit = P1^0;	/*根据硬件连接选择*/
sbit LCD5110_CE_bit	 = P1^1;	/*根据硬件连接选择*/
sbit LCD5110_DC_bit	 = P1^2;	/*根据硬件连接选择*/
sbit LCD5110_SDIN_bit= P1^3;	/*根据硬件连接选择*/
sbit LCD5110_SCLK_bit= P1^4;	/*根据硬件连接选择*/
 
#define LCD5110_DC_DATA 	HIGH_LEVEL
#define LCD5110_DC_COMMAND  LOW_LEVEL
 
#define LCD5110_X_AXIS_START_ADDRESS 0x80
#define LCD5110_Y_AXIS_START_ADDRESS 0x40
 
 
/*****************外部接口函数******************/
//清屏
extern void LCD5110ClearAll(void) ;
 
//初始化
extern void LCD5110Init(void) ;
 
//地址写文字
extern void LCD5110AddressWriteWord(UB8 x,UB8 y, UB8 const  *WCP,UB8 uintLong,UB8 uintNumber,UW16 index);
 
//地址画图
extern void LCD5110AddressWritePicture(UB8 x,UB8 y,UB8 *PCP,UB8 uintLong,UB8 uintNumber,UW16 index) ;
/**********************************************/
 
 
#endif /*__LCD5110_H__*/