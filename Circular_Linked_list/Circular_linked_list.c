
#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node *next;
	
};


void Create_Circular(struct node *receive,int number);
void Display_Circular(struct node *receive);


void insert_at_begining(struct node *receive,int number);
void insert_at_ending(struct node *receive,int number);


void delete_at_begining(struct node *receive);
void delete_at_ending(struct node *receive);



struct node *Head = NULL;

int main(void){
	
Create_Circular(Head,5);
Create_Circular(Head,10);	
Display_Circular(Head);

Create_Circular(Head,25);
Display_Circular(Head);

insert_at_begining(Head,39);
Display_Circular(Head);

Create_Circular(Head,45);	
Display_Circular(Head);

insert_at_begining(Head,39);
Display_Circular(Head);

insert_at_ending(Head,45);
Display_Circular(Head);


delete_at_begining(Head);
Display_Circular(Head);

delete_at_ending(Head);
Display_Circular(Head);

delete_at_ending(Head);
Display_Circular(Head);

return 0;
	
	
}
void Create_Circular(struct node *receive,int number){
	
	struct node *new,*ptr,*qtr;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = number;
	
	
	if(Head == NULL)
	{
	
	Head = new;
	new->next = Head;
			
	}
	else{
		
		ptr = receive; qtr = NULL;
		do{
			qtr = ptr;
			ptr=ptr->next;
			
		}while(ptr!=Head);
		
		qtr->next = new;
		new->next = receive;
		
	}
	
}

void Display_Circular(struct node *receive){
	
	struct node *ptr;
	ptr = receive;
	
	do{
			printf("%d ",ptr->data);
			ptr=ptr->next;
			
	 }while(ptr!=Head);
		
	
		printf("\n");
	
}


void insert_at_begining(struct node *receive,int number){
	
	struct node *ptr,*qtr,*new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = number;
	
	ptr = receive;
	qtr = NULL;
	
	do{
		qtr = ptr;
		ptr = ptr->next;
	}while(ptr!=Head);
	
	
	qtr->next = new;
	new->next = receive;
	Head = new;
	
}

void insert_at_ending(struct node *receive,int number){

struct node *ptr,*new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = number;

ptr = receive;

while(ptr->next != Head)ptr=ptr->next;

	new->next = ptr->next;
	ptr->next = new;

	
}


void delete_at_begining(struct node *receive){
	
	
     struct node *ptr=NULL;
	 ptr = receive;
	 while(ptr->next!=Head)ptr=ptr->next;
	 ptr->next = receive->next;
	 Head = receive->next;
	 free(receive);
	
	
	
}


void delete_at_ending(struct node *receive){
	
	
	struct node *ptr=NULL,*qtr=NULL;
	ptr=receive;
	
	while(ptr->next!=Head){
		
		qtr=ptr;
	ptr = ptr->next;
	}
	qtr->next = receive;
	free(ptr);
	
	
	
}
