#include<stdio.h>

int main()
{
  
int arr[12] = {0,1,1,0,1,2,1,2,0,0,0,1};
int arrresult[12];

int n = sizeof(arr)/sizeof(arr[0]),j=0;

for (int i = 0; i < n; i++)if(arr[i] == 0)arrresult[j++] = arr[i];
for (int i = 0; i < n; i++)if(arr[i] != 0)arrresult[j++] = arr[i];

for (int i = 0; i < n; i++)printf("%d ", arrresult[i]);
return 0;

}













































