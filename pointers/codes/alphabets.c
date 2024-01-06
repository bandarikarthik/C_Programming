#include<stdio.h>

int *count = 65;
int main(void){  // 65 - 90 Aphabets

for(; *count < 90 ;  (*count)++)printf("%c", *count );
printf("\n");

}


#include<stdio.h>

int Ascii = 65;
int *count = &Ascii;

int main(void){  // 65 - 90 Aphabets

for(; *count <= 90 ;  (*count)++)printf("%c ", *count );
printf("\n");

}

#include<stdio.h>

char *p;
int x = 0;

int main(void){  // 65 - 90 Aphabets

for (x = 0; x < 26; x++) {
        * (ptr + x) = x + 'A'; // Assigning ASCII values of alphabets to the array through the pointer
       
    }

 for (x = 0; x < 26; x++) {
        printf(" %c ",  *(ptr + x) ); 
       
    }
    printf("\n\n");

}

/*------------------------------------------------------------*/

#include<stdio.h>
char ptra[27];      //implicit pointer. as it will store in stack.
char *ptr = ptra; 
int x = 0;

int main(void){  // 65 - 90 Aphabets

for (x = 0; x < 26; x++) *(ptr + x) = x + 65;  // Assigning ASCII values of alphabets to the array through the pointer
for (x = 0; x < 26; x++) printf(" %c ",  *(ptr + x) );
        
}
