
#include <stdio.h>

int main()
{
char str[]  = "karthik"; //char str[10]  = "karthik";
char *p = "karthik";
int i,j,k,l;

for( k = 0; str[k]!= '\0'; k++);	
for( l = 0; *(str+l)!= '\0'; l++);
for( i = 0; p[i]!= '\0'; i++);	
for( j = 0; *(p+j)!= '\0'; j++);	

printf("str with array notation = %d\n",k);
printf("str with pointer notation = %d\n",l);
printf("*p with array notation = %d\n",i);
printf("*p with pointer notation = %d\n",j);

    return 0;
}
