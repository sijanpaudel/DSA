//GCD using recursion
#include<stdio.h>
int GCD(int x,int y)
{
  if(x==y)
   return x;
  if(x%y==0)
   return y;
  if(y%x==0)
   return x;
  if(x>y)
  {
    return GCD(x%y,y);
  }
  else
  {
    return GCD(x,y%x);
  }
}
int main()
{
  int a,b;
  printf("Enter the two numbers:\n");
  scanf("%d%d",&a,&b);
  printf("\nThe GCD of %d & %d is %d",a,b,GCD(a,b));
  return 0;
}
