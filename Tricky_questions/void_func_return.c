#include<stdio.h>

typedef unsigned short uint16_t;
typedef unsigned char uint8_t;

void *add2nums(uint8_t a,uint8_t b);

int main(void){
	
	uint16_t* sum_1 = add2nums(100,120);
	printf("%u,expected answer is 220\n",*sum_1);
	sum_1 = add2nums(123,210);
	printf("%u,expected answer is 333\n",*sum_1);
	return 0;	
		
}

void *add2nums(uint8_t a,uint8_t b){
		
uin8_t sum = 0;
sum = a+b;
return &sum;	
	
}

---------------------------------------------------------------------------------------------------------------------------------------
//Solution : 
  
#include<stdio.h>

typedef unsigned short uint16_t;
typedef unsigned char uint8_t;

uint16_t sum = 0;

void *add2nums(uint8_t a,uint8_t b);

int main(void){
	
	printf("address of sum %p\n",&sum);
	uint16_t* sum_1 = add2nums(100,120);
	printf("%u,expected answer is 220\n",*sum_1);
	printf("address of sum with sum1 pointer %p\n",sum_1);
	sum_1 = add2nums(123,210);
	printf("%u,expected answer is 333\n",*sum_1);
	return 0;	
		
}



void *add2nums(uint8_t a,uint8_t b){

//uint8_t sum = 0;

sum = a+b;
return &sum;	
	
}

output:
//tried with online gdb compiler 
address of sum 0x55ba8389b012 
220,expected answer is 220
address of sum with sum1 pointer 0x55ba8389b012
333,expected answer is 333

  


