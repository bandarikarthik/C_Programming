#include<stdio.h>
#include<stdint.h>



int arr[] = {8,9,4,7,6,3,10,5,14,2};

int* Reverse(int* P, uint8_t size);  //times how many times 

void main(void){
    
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array %d\n",size);
    
    printf("original Array\t\t");
     for(int i=0;i<size;i++)printf("%d ",arr[i]);
       printf("\n");
     int *P = Reverse(arr,size);
     printf("Reverse Array\t\t");
     for(int i=0;i<size;i++)printf("%d ",P[i]);
   
}

int* Reverse(int* P, uint8_t size){
   
    
    int i=0,j=size-1,temp;   ///size -1 gives you index 
   
    for(;i<j;i++,j--){
        
        temp = P[j];
        P[j] =  P[i];
        P[i] =  temp;
        
    } 

  
     return P;
    
}
