#include <stdio.h>
#include <stdint.h>
int main() {
uint8_t bit_Size = 8,shifting_left = 1,value = 0x55;

uint8_t final = ( value >> (bit_Size - shifting_left)) | (value << shifting_left) ;

for(int i = 7; i >= 0;i--) {

if(final & (1<<i)) printf("1");
else printf("0");

}
