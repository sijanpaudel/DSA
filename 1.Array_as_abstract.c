#include<stdio.h>
#include<stdlib.h>
struct myArray
{
  int total_size;
  int used_size;
  int *ptr;
};
void createArray(struct myArray *a,int tsize,int usize)
{
  a->total_size=tsize;
  a->used_size=usize;
  a->ptr=(int *)malloc(tsize*sizeof(sizeof(int)));
}
void setVal(struct myArray *a)
{
  for(int i=0;i<a->used_size;i++)
  {
    printf("\nEnter the element %d\n",i);
    scanf("%d",&(a->ptr)[i]);
  }
}
void show(struct myArray *a)
{
  for(int i=0;i<a->used_size;i++)
  {
    printf("%d\n",a->ptr[i]);
  }

}
int main()
{
  struct myArray a1;
  createArray(&a1,10,5);
  setVal(&a1);
  show(&a1);

}
