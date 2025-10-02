#include<stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
  *min = *max = arr[0];
  for(int i = 1; i<len; i++)
  {
    if(arr[i] > *max){
      *max = arr[i];
    }
    if(arr[i] < *min){
     *min = arr[i];
    }
  }
}


int main(){
  int a[10] = {6,54,31,28,78,62,30,87,39,86};
  int min, max;
  int len = sizeof(a)/sizeof(a[0]);
  minMax(a,len,&min,&max);
    printf("The minimum value is : %d\n, The maximum value is : %d", min, max);
  return 0;
}