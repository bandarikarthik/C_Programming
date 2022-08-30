#include<stdio.h>

void bin(unsigned n)
{
  int i;
 
for(i=32;i>=1;i--)   {  
     ( (n ) & (1<<31)) ? printf("1"):printf("0");
     n = n << 1;
     
 } 
}
 int main(void)
{
    bin(127);
    printf("\n");
  
}
