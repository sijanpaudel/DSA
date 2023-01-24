//Selection Sort Algorithm
#include<stdio.h>
int main()
{
  int arr[20],i,j,size,loc,min,temp;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("\nEnter the elements of array\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<(size-1);i++)
  {
    loc=i;
    min=arr[i];
    for(j=i+1;j<size;j++)
    {
      if(arr[j]<min)
      {
        min=arr[j];
        loc=j;
      }
    }
    temp=arr[i];
    arr[i]=arr[loc];
    arr[loc]=temp;
  }
  printf("\nThe array in sorted order\n");
  for(i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
