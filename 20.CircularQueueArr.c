//CircularQueue using array
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct CircularQueue
{
  int size;
  int r;
  int f;
  int *arr;
};
bool isEmpty(struct CircularQueue *ptr)
{
  if(ptr->f==ptr->r)
    return true;
  else
    return false;
}
bool isFull(struct CircularQueue *ptr)
{
  if((ptr->r+1)%ptr->size==ptr->f)
    return true;
  else
    return false;
}
void enqueue(struct CircularQueue *ptr,int data)
{
  if(isFull(ptr))
  {
    printf("Queue Overflow\n");
  }
  else
  {
    ptr->r=(ptr->r+1)%ptr->size;
    ptr->arr[ptr->r]=data;
    printf("Enqued element :%d\n",data);
  }
}
int dequeue(struct CircularQueue *ptr)
{
  int a=-1;
  if(isEmpty(ptr))
  {
    printf("Queue Underflow\n");
  }
  else
  {
    ptr->f=(ptr->f+1)%ptr->size;
    a=ptr->arr[ptr->f];
  }
  return a;
}
int main()
{
  struct CircularQueue *q;
  q=(struct CircularQueue*)malloc(sizeof(struct CircularQueue));
  q->size=100;
  q->f=0;
  q->r=0;
  q->arr=(int*)malloc(q->size*sizeof(int));
  enqueue(q,20);
  enqueue(q,30);
  printf("Dequeue element :%d",dequeue(q));
}
