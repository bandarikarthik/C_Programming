#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int main() {

uint16_t x = 0x1234;
uint8_t *c = (uint8_t *)&x;

for(int i=0;i< sizeof(uint16_t);i++) printf("%p  0x%x\n", (c+i),*(c+i));

if(*c == 0x34)printf("little Indian\n");
	else printf("Big endian\n");

    return 0;
}


/*

0x7fffc930bf1a  0x34
0x7fffc930bf1b  0x12
little Indian

*/
