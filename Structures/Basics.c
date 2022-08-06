#include<stdio.h>

struct book{
	char name[20];
	int  price;
}machines={"ps bimbra",1500};


int main(void){
	struct book power_systems={"VK metha",750};
	printf("%s %d\n",machines.name,machines.price);
	printf("%s %d\n",power_systems.name,power_systems.price);
	
}
