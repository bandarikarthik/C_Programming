#include <stdio.h>
#include<string.h>
#include<stdlib.h>

//char* mystrcpy(char *dest, const char *src);
 char *mystrncpy(char *dest, const char *src, int n);
int main()
{
const char *name  = "bandari karthik kumar "; 
int size = 8;
char *destination = (char*) malloc(sizeof(char)*(size+1));
//char *destination = (char*) calloc(sizeof(char),(size+1));                                  
destination = mystrncpy(destination,name,size);

printf("%s\n",destination);

return 0;
}


char * mystrncpy(char *dest, const char *src,int n){
    
    int i;
    for(i = 0; (src[i]!=0 && i < n);i++)
         dest[i] = src[i];
    
    dest[i]='\0';
    
    return dest;
    
}


