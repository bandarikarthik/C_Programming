
#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node *next;
	struct node *prev;
	
};

void Create_Double_LL(struct node *receive,int number);
void Display_Double_LL(struct node *receive);
void Display_Reverse_Double_LL(struct node *receive);

struct node *Head=NULL;


void Create_Double_LL(struct node *receive,int number)
{
		
	struct node *new,*ptr,*qtr;
	new=(struct node*)malloc(sizeof(struct node));
	new->data = number;
	ptr = receive;
	
if(Head == NULL){
		
		new->prev=NULL;
		new->next=NULL;
		
		receive = new;
		Head = receive;
		
	}
	else{
		
		while(ptr)
		{
			qtr=ptr;
			ptr = ptr->next;			
		}
		qtr->next = new;
		new->prev = qtr;
		new->next=NULL;
		Head = receive;
		
	}
	
}	
	
	void main(void)
	{
		
		Create_Double_LL(Head,11);Create_Double_LL(Head,12);
		Create_Double_LL(Head,13);Create_Double_LL(Head,14);
		Display_Double_LL(Head);
		Display_Reverse_Double_LL(Head);
	}
	
void Display_Double_LL(struct node *receive){
	
	struct node *ptr;
	ptr = receive;

	while(ptr!=NULL){
			printf("%d ",ptr->data);
			ptr=ptr->next;
			
	}		
	printf("\n");
	
}	
	
void Display_Reverse_Double_LL(struct node *receive){
	
	struct node *ptr,*qtr=NULL;
	ptr = receive;
printf("printing Reverse elements in an Double_LL: ");
	while(ptr!=NULL)
	{
	    
	    qtr=ptr;
	    ptr=ptr->next;
	//printf("%d ",ptr->data);
}	while(qtr!=NULL)
	{
		printf("%d ",qtr->data);
		qtr=qtr->prev;
	}
			
printf("\n");
	
}	

	
	
	
	
