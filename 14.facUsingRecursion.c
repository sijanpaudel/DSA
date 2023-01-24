//Factorial using recursion
#include<stdio.h>
int fact(int x)
{
  if(x<=1)
  {
    return 1;
  }
  else
  {
    return x*fact(x-1);
  }
}
int main()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  printf("\nThe facorial of %d is %d",n,fact(n));
}
