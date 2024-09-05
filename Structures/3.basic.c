#include <stdio.h>

typedef struct book{

int a;
int b;
int *c;

}book_t;

int main()
{
  
book_t p = { 10,20, &(p.b)};  //very very important

book_t *ptr;
ptr= &p;

printf("%d %d %d ",ptr->a, ptr->b, *(ptr->c) );
    return 0;
}
