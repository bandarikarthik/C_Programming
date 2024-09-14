#include<stdio.h>

void receive(int *ptr);

int main(int argc,char* argv[]){

	int num = 123;
	int *singlepointer;
	int **doublepointer;

	singlepointer = &num;
	doublepointer = &singlepointer;

	//possible ways to print numvalue;

	printf("num = %d num = %d num = %d",num,*singlepointer,**doublepointer);
	printf("Address num = %d num = %d num = %d",&num,singlepointer,*doublepointer);

	receive( (void*)&singlepointer );


}

void receive(int *ptr){

*ptr = 456;


}

/*

num 123
&num = 0x1fffc7f0
*&num = 123

singlepointer = 0x1fffc7f0
&singlepointer = 0x1fffc7ec


int *ptr
ptr = 0x1fffc7ec

*/


