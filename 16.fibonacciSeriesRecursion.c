//fibonacci series using recursion
#include<stdio.h>
int fib(int x)
{
  if(x==1||x==2)
  {
    return 1;
  }
  else
  {
    return fib(x-1)+fib(x-2);
  }
}
int main()
{
  int n;
  printf("Enter the index of fibonacci series\n");
  scanf("%d",&n);
  printf("\nThe fibonacci of %d index is %d",n,fib(n));
  return 0;
}
