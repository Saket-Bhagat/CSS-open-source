#include <stdio.h>
void display(int *arr, int size)
{
  // display code goes here
  for(int i=0 ; i<size; i++)
  {
    printf("%d ",arr[i]);
  }
}
int linearSearch()
{
  // linear search code goes here
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
    display(arr,9);

  return 0;
}