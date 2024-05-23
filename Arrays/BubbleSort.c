// Sorting of array Bubble sort.. 
----------------------

#include <stdio.h>

int arr[] = { 1,4,3,2,7};

int main(int argc, char* argv[]){
	
	
	int size = sizeof(arr)/sizeof(arr[0]);                           
	
for(int i = 0;i<size-1;i++)
	for(int j = 0;j<size-1-i;j++)
		
		if(arr[j] > arr[j+1]){
			
			int temp = arr[j+1];
			arr[j+1] = arr[j];
			arr[j]   = temp;
		}
		
for(int k =0 ; k < size ; k++)
	printf("%d ", arr[k]);

	
}
