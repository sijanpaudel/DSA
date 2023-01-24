//Coding Deletion Operation in Array
#include<stdio.h>
void show(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void indDel(int arr[],int size,int index)
{
  for(int i=index;i<size-1;i++)
  {
    arr[i]=arr[i+1];
  }
}
int main()
{
  int arr[100]={4,10,12,15,30};
  int size=5;
  int capacity=100;
  show(arr,size);
  indDel(arr,5,0);
  size--;
  show(arr,size);
}
