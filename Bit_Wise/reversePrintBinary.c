// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>
int main() {
    // Write C code here
uint8_t value = 0xAA;
printf("original\t");
for(int i=7;i>=0;i--){    //need to go upto 7th position shifting consider 0 also.
    
    if(value & (1<<i)) printf("1");
    else printf("0");
}
printf("\nreverse \t");
for(int i=0;i<=7;i++){
    
    if(value & (1<<i)) printf("1");
    else printf("0");
}
    return 0;
}
