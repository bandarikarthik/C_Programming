
#include <stdio.h>
#include <stdint.h>

int main()
{
uint8_t m=254,n=255,o=256;
     printf("%d\n",m);
     printf("%d\n",n);
     printf("%d\n",o);
     return 0;
}
/***************************************************************************************************************************
output console 
main.c:14:23: warning: unsigned conversion from ‘int’ to ‘uint8_t’ {aka ‘unsigned char’} changes value from ‘256’ to ‘0’ [-Woverflow]
   14 | uint8_t m=254,n=255,o=256;
      |                       ^~~
254
255
0
****************************************************************************************************************************/
