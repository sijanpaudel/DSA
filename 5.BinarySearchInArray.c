//binary search for sorted arrat
//Time complexity O(logn)
#include<stdio.h>
int binarySearch(int arr[],int size,int element)
{
  int low=0;
  int high=size-1;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]==element)
    {
      return mid;
    }
    if(element>arr[mid])
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return -1;
}
int main()
{
  int arr[100]={3,4,6,11,23,100};
  int size=6;
  int element=23;
  int search=binarySearch(arr,size,element);
  printf("%d element found at %d index",element,search);

}
