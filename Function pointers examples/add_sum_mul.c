#include <stdio.h>
void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a , b ;

	printf("Enter Choice: 0 for add, 1 for subtract and 2"
			"for multiply\n");
	scanf("%d", &ch);
	if (ch > 2) 
	{
	    printf("Invalid Entry\n");
	    return 0;
    }
     printf("Enter two numbers\n"); 
     scanf("%d", &a); scanf("%d", &b);
	
	 (*fun_ptr_arr[ch])(a, b);

     	return 0;
}
