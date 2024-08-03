#include <stdio.h>
#include<string.h>
#include<stdlib.h>

char * mystrcat(char *dest, const char *src);

int main()
{
    
char str1[25]= "bandari";
char str2[25]= "karthik";

printf("%s\n",mystrcat(str1,str2));

return 0;
}
char *mystrcat(char *dest, const char *src){
     
int source_size,destination_size = strlen(dest);

for( source_size = 0; src[source_size]!= '\0'; source_size++,destination_size++)
    dest[destination_size] = src[source_size];

dest[destination_size] = '\0';
return dest;
}
