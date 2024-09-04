#include<stdio.h>
#include<stdint.h>



int arr[] = {8,9,4,7,6,3,10,5,14,2};

int* Rotateleft(int* P, uint8_t size);  //times how many times 

void main(void){
    
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array %d\n",size);
    
    printf("original Array\t\t");
     for(int i=0;i<size;i++)printf("%d ",arr[i]);
       printf("\n");
     int *P = Rotateleft(arr,size);
     printf("Rotated left Array\t");
     for(int i=0;i<size;i++)printf("%d ",P[i]);
   
}

int* Rotateleft(int* P, uint8_t size){
   
    
    int i=size;

    int temp = P[0]; //store first element in temp it will be added at last index.
   for(int i=0;i<size;i++) P[i] = P[i+1];
   P[size - 1] = temp;
   

     return P;
    
}
