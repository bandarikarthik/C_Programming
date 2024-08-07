#include<stdio.h>

void sort012(int *arr,int n);

int main()
{
    // Sample Input
int arr[12] = {0,1,1,0,1,2,1,2,0,0,0,1};
int n = sizeof(arr)/sizeof(arr[0]);
sort012(arr,n);

for (int i = 0; i < n; i++)printf("%d ", arr[i]);
return 0;

}

void sort012(int *arr,int n){
    
int c0,c1,c2,index; 
    
for(int i=0;arr[i]<n;i++){
    
          if(arr[i]==0)c0++;
     else if(arr[i]==1)c1++;
     else if(arr[i]==2)c2++;
     
   } 
  
for(int i=0;i<c0;i++)arr[index++]=0;
    for(int i=0;i<c1;i++)arr[index++]=1;
        for(int i=0;i<c2;i++)arr[index++]=2; 
  
}
