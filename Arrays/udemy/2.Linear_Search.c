#include<stdio.h>
#include<stdint.h>
#define  KEY     5U


int arr[] = {8,9,4,7,6,3,10,5,14,2};

uint8_t linearSearch(int* P, uint8_t key, uint8_t size);

void main(void){
    
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array %d\n",size);
    
    uint8_t key = KEY;  // key value to be search in array
    int result = linearSearch(arr,key,size);
    
   if(result != 50)  // took random number for return value for comparision.
     printf("element found at %d ",result);
    else
      printf("element not found");
      
}
uint8_t linearSearch(int* P, uint8_t key, uint8_t size){
    
    
    uint8_t i=0;
    
    for(; i<size; i++){
        
     if( *(P+i) == key)
     return i; //return index search sucessfull
     
    }
    
    return 50;   //search unsucessfull
    
}
