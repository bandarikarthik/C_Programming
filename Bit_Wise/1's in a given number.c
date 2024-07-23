//Binary representation of a 8 bit given number
//the value should be from 0 to 255
//No of 1's in a given number

#include <stdio.h>
#include<stdint.h>
#define sizebits 8U

int main()
{
    
uint8_t number = 0x55,count=0;
for(int i = 7; i >= 0;i--)
{
   if(number & (1<<i)) printf("1");
   else printf("0");
   
  if(number & (1<<i))count++;
   
}
printf("\n%d",count);
    return 0;
}
