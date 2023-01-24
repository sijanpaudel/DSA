//Bubble Sort Algorithm
#include<stdio.h>
int main()
{
  int arr[20],i,j,size,swap,temp;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);
  printf("Enter the elements of array\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=1;i<size;i++)
  {
    swap=0;
    for(j=0;j<(size-i);j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        swap=1;
      }
    }
    if(swap==0)
    {
      break;
    }
  }
  printf("\nThe elements in sorted order is:\n");
  for(i=0;i<size;i++)
  {
    printf("%d\n",arr[i]);
  }
}
