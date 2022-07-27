#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

/*function prototypes*/

void create_node(struct node* receive,int number);
void display_linked_list(struct node* receive);
void insert_begining(struct node *receive,int number);
void insert_at_end(struct node* receive,int number);
void delete_at_begining(struct node* receive);
void delete_at_end(struct node* receive);
void delete_data(struct node* receive,int number);

struct node *Head=NULL;

void main(void)
{

create_node(Head,5);
create_node(Head,15);
create_node(Head,25);
display_linked_list(Head);printf("\n");
insert_begining(Head,9);printf("inserting at begining\n");
display_linked_list(Head);
insert_at_end(Head,45);printf("\ninserting at end\n");
display_linked_list(Head);
delete_at_begining(Head);printf("\ndelete at begining\n");
display_linked_list(Head);
delete_at_end(Head);printf("\ndelete at end\n");
display_linked_list(Head);
delete_data(Head,15);printf("\ndelete the number in linked list\n");
display_linked_list(Head);
}

void create_node(struct node *receive,int number)
{

struct node *new,*ptr,*qtr;

new = (struct node*)malloc(sizeof(struct node));
new->data = number;
new->next = NULL;


if(receive == NULL)
{
receive = new;
Head    = receive;
}
else
{

ptr = receive;
qtr=NULL;

while(ptr!=NULL)
{
qtr=ptr;
ptr = ptr->next;
}

qtr->next = new;

}

}

void display_linked_list(struct node *receive)
{
    struct node *ptr;
    ptr=receive;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->next;
        
    }
    
}

void insert_begining(struct node *receive,int number){
    
    struct node *new;
new = (struct node*)malloc(sizeof(struct node));
new->data = number;
new->next = receive;
Head = new;

}



void insert_at_end(struct node* receive,int number)
{
struct node *ptr,*new,*qtr=NULL;
new = (struct node*)malloc(sizeof(struct node));
new->data = number;
new->next = NULL;
 
 ptr = receive; 
 
 while(ptr!=NULL){
        qtr = ptr;
        ptr = ptr->next;
 }
 qtr->next = new;
}

void delete_at_begining(struct node* receive)
{    
   Head = receive->next;
   free(receive);
}


void delete_at_end(struct node* receive){
    
    struct node *ptr,*qtr=NULL;
    
     ptr = receive; 
 
 while(ptr->next!=NULL){
        qtr = ptr;
        ptr = ptr->next;
 }
    qtr->next = NULL;
    
}

void delete_data(struct node* receive,int number){
    
    
    struct node *ptr,*qtr=NULL;
    
     ptr = receive; 
 
 while(ptr->data!=number){
        qtr = ptr;
        ptr = ptr->next;
 }
    qtr->next = ptr->next;
    
    free(ptr);
    
    
}
