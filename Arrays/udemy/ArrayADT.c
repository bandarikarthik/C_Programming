#include<stdio.h>
struct array{
    
    int A[10];
    int size; //array size
    int length;  //how many elements are present in array
    
};

void Display(struct array);
void append(struct array* PDarr,int element,int alength);
void insert(struct array* PDarr,int element,int length,int index);

void main(void){
    
 struct array arr = {{1,2,3,4,5},10,5}; 
  printf("Actual: ");  
 ///arr = {{1,2,3,4,5},10,5}; 
 Display(arr);
 printf("\nAdded: ");
 //Add an element at end 
 append(&arr,6,arr.length);
  Display(arr);

 printf("\nInsert: "); 
  insert(&arr,6,arr.length,3);
  Display(arr);
  
}
void Display(struct array Darr){
   
    int length = Darr.length;
   for(int i=0;i<length;i++)printf("%d ",Darr.A[i]);
    
}

void append(struct array* PDarr,int element,int alength){
    
    PDarr->A[alength] = element;
    PDarr->length = alength+1;
    
}

void insert(struct array* PDarr,int element,int length,int index){
    int i =0;
    for(i = length; i>index; i--) PDarr->A[i] = PDarr->A[i-1];
    
     
     PDarr->A[i] = element; //keep element in given index
     PDarr->length = length+1;
    
    
}
