//Insertion Sort Algorithm
#include<stdio.h>
int main()
{
  int arr[20],size,i,j,temp;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("\nEnter the elements of array\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=1;i<size;i++)
  {
    temp=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
  }
  printf("\nThe elements in sorted order\n");
  for(i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
