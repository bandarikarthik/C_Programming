

#include<stdio.h>
#include<string.h>

char *mystrrev(char *);
int main()
{
 char p[10] = "karthik";  
  printf("%s\n",mystrrev(p));
  
    return 0;
}

char *mystrrev(char *p){

int start = 0,end = strlen(p)-1;
char temp;
while(start < end){

temp = p[end];
p[end] = p[start];
p[start] = temp;
start++;
end--;

}

return p;
}
