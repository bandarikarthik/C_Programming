
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




void inserting_at_begining(struct node *receive,int number);
void inserting_at_ending(struct node *receive,int number);

void inserting_at_position(struct node *receive,int number,int position);

void deleting_at_begining(struct node *receive);
void deleting_at_ending(struct node *receive);





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
		
		inserting_at_begining(Head,10);	Display_Double_LL(Head);Display_Reverse_Double_LL(Head);
		inserting_at_ending(Head,15);	Display_Double_LL(Head);Display_Reverse_Double_LL(Head);
		
		inserting_at_position(Head,10,5);Display_Double_LL(Head);Display_Reverse_Double_LL(Head);
		
		deleting_at_begining(Head);Display_Double_LL(Head);Display_Reverse_Double_LL(Head);
		deleting_at_ending(Head);Display_Double_LL(Head);Display_Reverse_Double_LL(Head);
		
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

void inserting_at_begining(struct node *receive,int number){
	
	
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data = number;
	new->prev=NULL;
	new->next=receive;
	receive->prev=new;
	Head=new;
	printf("after inserting begining \n");
	
		
}

void deleting_at_ending(struct node *receive){
	
	while(receive->next!=NULL)receive=receive->next;
	receive->prev->next=NULL;
	free(receive);
	
}

void deleting_at_begining(struct node *receive){
	
	Head = receive->next;
	Head->prev=NULL;
	free(receive);
	receive=NULL;
	printf("after deleting at begining \n");
	
    
}


void inserting_at_ending(struct node *receive,int number){
	
	
	struct node *new,*ptr;
	new=(struct node*)malloc(sizeof(struct node));
	new->data = number;
	new->next=NULL;
	ptr=receive;
	while(ptr->next!=NULL)ptr=ptr->next;
	new->prev=ptr;
	ptr->next=new;
	
	
}
	
	
	
void inserting_at_position(struct node *receive,int number,int position){// between starting and ending only
	
	
	struct node *new=NULL,*ptr=NULL,*qtr=NULL;
	ptr=receive;
	new=(struct node*)malloc(sizeof(struct node));
	new->data = number;
	while(position--){
		qtr=ptr;
		ptr=ptr->next;
		
	}
	new->prev=ptr->prev;
	qtr->next=new;
	new->next=ptr;
	ptr->prev=new;
	
	
}





