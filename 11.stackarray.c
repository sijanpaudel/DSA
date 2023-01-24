#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct stack
{
  int size;
  int top;
  int *arr;
};
bool isEmpty(struct stack *ptr)
{
  if(ptr->top==-1)
  {
    return true;
  }
  else
  {
    return 0;
  }
}
int isFull(struct stack* ptr)
{
  if(ptr->top==(ptr->size)-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void push(struct stack* ptr,int value)
{
  if(isFull(ptr))
  {
    printf("Stack Overflow\n");
  }
  else
  {
    ptr->top++;
    ptr->arr[ptr->top]=value;
  }
}
int pop(struct stack* ptr)
{
  if(isEmpty(ptr))
  {
    printf("Stack Underflow\n");
    return -1;
  }
  else
  {
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}
int main()
{
  struct stack *s;
  s=(struct stack*)malloc(sizeof(struct stack));
  s->size=10;
  s->top=-1;
  s->arr=(int*)malloc(s->size*sizeof(int));
  push(s,10);
  push(s,21);
  printf("%d",pop(s));
}
