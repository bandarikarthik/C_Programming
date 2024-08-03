// Online C compiler to run C program online
#include <stdio.h>
int mystrcmp(const char* str1, const char* str2);

int main() {
 char *str1 = "apple";
 char *str2 = "banana";
int result = mystrcmp(str1,str2);
printf("%d",result);
    return 0;
}

int mystrcmp(const char* str1, const char* str2){
    
  int result;
    while(*str1++  && *str2++ ){
        
        if(*str1 == *str2)
            result = 0;
    else  if(*str1 < *str2)result = -1;
      else  if(*str1 > *str2)result = 1;   
    
    }
   return  result; 
}
