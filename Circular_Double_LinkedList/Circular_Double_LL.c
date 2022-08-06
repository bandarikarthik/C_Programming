#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node *next;
	struct node *prev;
	
};

void Create_CircularDouble_LL(struct node *receive,int number);
void Display_CircularDouble_LL(struct node *receive);




void inserting_at_begining(struct node *receive,int number);
void inserting_at_ending(struct node *receive,int number);

void deleting_at_begining(struct node *receive);
void deleting_at_ending(struct node *receive);


	
struct node *Head=NULL;

void Create_CircularDouble_LL(struct node *receive,int number){
	
	struct node *new,*ptr;
	ptr=receive;
	new = (struct node *)malloc(sizeof(struct node));
	new->data = number;
	
	if(Head == NULL){
	
	new->prev = new;
	new->next = new;
	Head = new;
	
 }else 
 {
	 
	 while(ptr->next!=Head)ptr=ptr->next;
	 ptr->next = new;
	 new->prev=ptr;
	 new->next = receive;
	 ptr->prev=new;
	 Head = receive;	 
 }
	
}	
void Display_CircularDouble_LL(struct node *receive){
	
	struct node *ptr;
	ptr=receive;
	do{
		
		printf("%d ",ptr->data);
		ptr=ptr->next; 
		
	}while(ptr!=Head);
	
	
	printf("\n");
	
	
}

     void main(void)
	{
		
		
		Create_CircularDouble_LL(Head,1);
		Display_CircularDouble_LL(Head);
		
	//	inserting_at_begining(Head,10);
	//	Display_CircularDouble_LL(Head);
		
		Create_CircularDouble_LL(Head,2);
		Display_CircularDouble_LL(Head);
		
		Create_CircularDouble_LL(Head,3);
		Display_CircularDouble_LL(Head);
		
		inserting_at_begining(Head,10);
		Display_CircularDouble_LL(Head);
		
	 	inserting_at_begining(Head,20);
	 	Display_CircularDouble_LL(Head);
		
     	Create_CircularDouble_LL(Head,30);	
     	Display_CircularDouble_LL(Head);
     	
     	inserting_at_begining(Head,30);
     	Display_CircularDouble_LL(Head);
     	
		Create_CircularDouble_LL(Head,3);
		Display_CircularDouble_LL(Head);
		
		inserting_at_ending(Head,4);
		Display_CircularDouble_LL(Head);
		
		Create_CircularDouble_LL(Head,5);
		Display_CircularDouble_LL(Head);
		
		deleting_at_begining(Head);
		Display_CircularDouble_LL(Head);
		
		
		deleting_at_begining(Head);
		Display_CircularDouble_LL(Head);
		
		deleting_at_ending(Head);
	   Display_CircularDouble_LL(Head);
	   
	   deleting_at_ending(Head);
	   Display_CircularDouble_LL(Head);
	   
	   deleting_at_ending(Head);
	   Display_CircularDouble_LL(Head);
	 
	   deleting_at_ending(Head);
	   Display_CircularDouble_LL(Head);  	

     	inserting_at_ending(Head,4);
		Display_CircularDouble_LL(Head);   
	   
	   deleting_at_ending(Head);
	   Display_CircularDouble_LL(Head);  
	   
	   inserting_at_begining(Head,20);
     	Display_CircularDouble_LL(Head);
     	
     	Create_CircularDouble_LL(Head,4);
		Display_CircularDouble_LL(Head);
		
	   
	}
	
void inserting_at_begining(struct node *receive,int number){
	
	
	struct node *new,*ptr;
	new=(struct node*)malloc(sizeof(struct node));
	new->data = number;
	
	ptr=receive;                                              //if you travel to Last node 
	while(ptr->next!=Head)ptr=ptr->next;
	
	new->prev = ptr;
	new->next = receive;
    ptr->next = new;
	receive->prev = new;
	Head = new;
	
	
	
	
/*	struct node *new,*ptr;
	new=(struct node*)malloc(sizeof(struct node));
	new->data = number;
	ptr=receive; 
	
	                                                           //head previous has the last node address   
	
	new->prev = ptr->prev;
	new->prev->next  = new;
	new->next = ptr;
	ptr->prev=new;
	Head=new;
	*/
	
	
	}
	
	void inserting_at_ending(struct node *receive,int number){
	
	
	struct node *new,*ptr;
	ptr=receive;
	new=(struct node*)malloc(sizeof(struct node));
	new->data = number;
	

	while(ptr->next!=Head)ptr=ptr->next;
	ptr->next = new;
	new->prev = ptr;
	new->next = receive;
	receive->prev = new;
	
	/*	new->prev = ptr->prev;
	ptr->prev->next = new;
	new->next = ptr;
	ptr->prev = new;
	
	*/
	
	}
	
	
	void deleting_at_begining(struct node *receive){
		
	struct node *ptr;	
	ptr=receive;
	while(ptr->next!=Head)ptr=ptr->next;
	ptr->next = receive->next;
	receive->next->prev = ptr;
	Head = receive->next;
	free(receive);
	receive=NULL;
		
	}
	
	
	void deleting_at_ending(struct node *receive){
		
	struct node *ptr,*qtr;
	
	ptr=receive;
	qtr=NULL;
	while(ptr->next!=Head)
	{
		qtr=ptr;
		ptr=ptr->next;
	}
	qtr->next = receive;
	receive->prev = qtr;
	free(ptr);
	ptr=NULL;
	
	
	
	
	
	}
	
