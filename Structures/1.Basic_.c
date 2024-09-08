#include <stdio.h>

struct book{
	char name[20];
	int  price;
};


int main()
{
  struct book machine; 
printf("enter name");scanf("%s",machine.name);
printf("enter price ");scanf("%d",&machine.price);
printf("%s\n",machine.name);
printf("%d\n",machine.price);
    return 0;
}
