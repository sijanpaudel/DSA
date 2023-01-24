//Queue Operation using array
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct Queue
{
  int size;
  int f;
  int r;
  int *arr;
};
bool isEmpty(struct Queue *ptr)
{
  if(ptr->f==ptr->r)
    return true;
  else
    return false;
}
bool isFull(struct Queue *ptr)
{
  if(ptr->r==ptr->size-1)
    return true;
  else
    return false;
}
void enqueue(struct Queue* ptr,int data)
{
  if(isFull(ptr))
  {
    printf("Queue Overflow\n");
  }
  else
  {
    ptr->r++;
    ptr->arr[ptr->r]=data;
  }
}
int dequeue(struct Queue *ptr)
{
  int a=-1;
  if(isEmpty(ptr))
  {
    printf("Queue Underflow\n");
  }
  else
  {
    ptr->f++;
    a=ptr->arr[ptr->f];
  }
  return a;
}
int main()
{
  struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
  q->size=100;
  q->f=-1;
  q->r=-1;
  q->arr=(int*)malloc(q->size*sizeof(int));
  enqueue(q,12);
  enqueue(q,16);
  printf("%d",dequeue(q));
}
