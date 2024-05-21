#include<stdio.h>

typedef float fun_t(float,float);
fun_t add,sub;

typedef float (*fptr_t)(float,float);
fptr_t funPtr = NULL;

void calculator(fptr_t , float, float );

int main(void){

		 calculator(add,5,6);
		 calculator(sub,10,6);
		 
}

float add(float num1, float num2){
	return num1 + num2;
}
float sub(float num1, float num2){
	return num1 - num2;
}

void calculator(fptr_t funPtr, float num1, float num2){
	
	printf("Result: %f\n", funPtr(num1, num2));
}
