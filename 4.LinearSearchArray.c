//linearSearch on unsorted array
#include<stdio.h>
int linearSearch(int arr[],int size,int element)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==element)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int arr[100]={1,45,111,544,600};
  int size=5;
  int element=111;
  int search=linearSearch(arr,size,element);
  printf("element %d found at index %d",element,search);
}
