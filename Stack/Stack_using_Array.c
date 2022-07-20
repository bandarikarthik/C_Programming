/*
This file has the following functions implemented for now 

void create(struct stack *s);
void PUSH(struct stack *s,int element);
void display_stack(struct stack s);
int POP(struct stack *s);

*/

#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int stack_size;
    int *stackmemory;
};

void create(struct stack *s);
void PUSH(struct stack *s,int element);
void display_stack(struct stack s);
int POP(struct stack *s);


void create(struct stack *s){
    
  printf("enter the stack size "); scanf("%d", &s->stack_size); 
     s->top = -1;
     
     s->stackmemory = (int*)malloc(s->stack_size * sizeof(int));
       printf("\nThe stack size is %d\n",s->stack_size); 
}
int main()
{
    struct stack a;
 
    create(&a);
    
    PUSH(&a,10);  PUSH(&a,20); PUSH(&a,30);
    
    display_stack(a);
    
    POP(&a);
    display_stack(a);
    
    
    return 0;
}

void PUSH(struct stack *s,int element){
    
    if(s->top == s->stack_size-1){
        
        printf("\nStack is full \n");
      
        
    }
    else{
        
        s->top++;
       s->stackmemory[s->top] = element;

    }
    
}
void display_stack(struct stack s){
    
    int i;
    
    for(i=s.top;i>=0;i--)printf("%d\n",s.stackmemory[i]);
    

}

int POP(struct stack *s){
    
    int x=-1;
    
    if(s->top == -1){
        printf("stack is empty\n");
        return x;
    }
    else{
        printf("after POP\n");
        x = s->stackmemory[s->top--];
    }
    
}
