#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mystrcpy(char *dest, const char *src);

int main()
{
const char *name  = "karthik"; 
char *destination = (char*) malloc(sizeof(char)*(strlen(name)+1));
                                   
destination = mystrcpy(destination,name);

printf("%s\n",destination);

return 0;
}


char * mystrcpy(char *dest, const char *src){
    
    int i;
    for(i = 0;src[i]!=0;i++)
         dest[i] = src[i];
    
    dest[i]='\0';
    
    return dest;
    
}

