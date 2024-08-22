#include<stdio.h>
#include<string.h>
#include<stdint.h>

char Arralpha[26],result[50];
int main()
{
    char alpha = 'a',*str = "tcp is a transport"; 

    for(int i = 0; i < 26; i++) Arralpha[i] = 'a'+i;
    for(int i = 0; i< 26; i++)printf("%c ",Arralpha[i]);
    printf("\n");
    
    uint16_t lenstr = strlen(str),flag = 0,resulti=0;
    char a;
    for(a = 'a'; a <= 'z'; a++){
        
             for(int i = 0; i< lenstr; i++){
                 
                   if(str[i] == a){
                      flag = 1;
                      break;
                   }
                   
             }
       if(flag)result[resulti++] = a;
       else result[resulti++] = '.';
       flag = 0;
   
    }
    
 for(int i=0;i<50;i++)printf("%c",result[i]);
    return 0;
}



/*
a.c.....i....nop.rst......
a.c.....i....nop.rst......  
  */
