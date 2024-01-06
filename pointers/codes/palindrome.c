#include<stdio.h>
#include <conio.h>
#include<stdint.h>

char *p = "malayalam";
char *start,*end;
uint16_t length;
int main(){

start = p; end = p;
for( ; *end !='\0';end++ )length++;
printf("%d\n",length);
while(*start){
	if(*start++ !=  *--end){
		printf("Not a palindrome\n");
		getch();
		return 0;
	}

}
printf("palindrome\n");
getch();
return 0;

}

