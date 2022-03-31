/*This application code helps in RTC interfacing */

#include<stdio.h>
#include<stdint.h>
void main(void)
{
	uint8_t m , n;
	uint8_t bcd;
                                    //         32  16  8  4  2  1
uint8_t	value = 23; -------->     // binary    0    1  0  1  1  1
	if(value >= 10)
	{
		m = value /10;
		n = value % 10;
		bcd = (m << 4) | n ;
	}                                       //writing this 2 3  as separate 
                                 //but back ground looks like 
	printf("%d",bcd);           //    128  64  32  16   8  4  2  1
}                               //     0    0   1   0    0  0  1  1
//looks like 2 3 are separated but back ground value will be  32+2+1 = 35 BCD
