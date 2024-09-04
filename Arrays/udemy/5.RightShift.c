#include<stdio.h>
#include<stdint.h>
#define  KEY     5U


int arr[] = {8,9,4,7,6,3,10,5,14,2};

int* rotate_right(int* P, uint8_t key, uint8_t size);

void main(void){
    
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array %d\n",size);
    
    uint8_t key = KEY;  // key value to be search in array
    
     int *P = rotate_right(arr,key,size);
     for(int i=0;i<size;i++)printf("%d ",P[i]);
   
}

int* rotate_right(int* P, uint8_t key, uint8_t size){
    
    int i=size;
    for(;i>=0;i--)P[i+1] = P[i];
    P[0] = 0;
    return P;
    
}
