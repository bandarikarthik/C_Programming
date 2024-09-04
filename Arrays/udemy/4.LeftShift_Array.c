#include<stdio.h>
#include<stdint.h>


int arr[] = {8,9,4,7,6,3,10,5,14,2};

int* rotate_left(int* P, uint8_t size);

void main(void){
    
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array %d\n",size);
    printf("original Array:   ");
     for(int i=0;i<size;i++)printf("%d ",arr[i]);
       printf("\n");
     int *P = rotate_left(arr,size);
      printf("Rotate leftArray: ");
     for(int i=0;i<size;i++)printf("%d ",P[i]);
   
}

int* rotate_left(int* P, uint8_t size){
    
    int i=0;
    for(;i<size;i++)P[i-1] = P[i];
    P[size-1] = 0;
    return P;
    
}
