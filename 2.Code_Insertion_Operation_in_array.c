#include<stdio.h>
void show(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int indInsert(int arr[],int size,int element,int capacity,int index)
{
  if(size>=capacity)
  {
    return -1;
  }
  for(int i=size-1;i>=index;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[index]=element;
}
int main()
{
  int arr[100]={1,4,9,10,14};
  int size=5;
  int capacity=100;
  show(arr,size);
  indInsert(arr,size,3,capacity,1);
  size++;
  show(arr,size);
}
