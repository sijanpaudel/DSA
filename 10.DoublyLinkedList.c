//Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node* prev;
  struct Node* next;
};
void DLLTraversalF(struct Node* head)
{
  struct Node* ptr=head;
  while(ptr!=NULL)
  {
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
  }
}
void DLLTraversalB(struct Node* last)
{
  struct Node *ptr=last;
  while(ptr!=NULL)
  {
    printf("Element: %d\n",ptr->data);
    ptr=ptr->prev;
  }
}
int main()
{
  struct Node *N1;
  struct Node *N2;
  struct Node *N3;
  struct Node *N4;
  N1=(struct Node*)malloc(sizeof(struct Node));
  N2=(struct Node*)malloc(sizeof(struct Node));
  N3=(struct Node*)malloc(sizeof(struct Node));
  N4=(struct Node*)malloc(sizeof(struct Node));
  N1->prev=NULL;
  N1->data=13;
  N1->next=N2;
  N2->prev=N1;
  N2->data=10;
  N2->next=N3;
  N3->prev=N2;
  N3->data=14;
  N3->next=N4;
  N4->prev=N3;
  N4->data=50;
  N4->next=NULL;
  printf("\nIn Forth\n");
  DLLTraversalF(N1);
  printf("\nIn Back\n");
  DLLTraversalB(N4);
  return 0;
}
