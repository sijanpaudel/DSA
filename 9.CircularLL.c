//Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};
void CircularLLTraversal(struct Node* head)
{
  struct Node *ptr=head;
  do
  {
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
  }while(ptr!=head);
}
struct Node* insertAtFirst(struct Node* head,int data)
{
  struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
  struct Node *p=head;
  while(p->next!=head)
  {
    p=p->next;
  }
  p->next=ptr;
  ptr->data=data;
  ptr->next=head;
  head=ptr;
  return head;
}
int main()
{
  struct Node* head;
  struct Node* second;
  struct Node* third;
  struct Node* fourth;
  head=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  fourth=(struct Node*)malloc(sizeof(struct Node));
  head->data=12;
  head->next=second;
  second->data=13;
  second->next=third;
  third->data=10;
  third->next=fourth;
  fourth->data=100;
  fourth->next=head;
  printf("\nCircular Linked List Traversal before insertion\n");
  CircularLLTraversal(head);
  printf("\nCircular Linked List Traversal after insertion\n");
  head=insertAtFirst(head,2);
  head=insertAtFirst(head,9);
  CircularLLTraversal(head);
  return 0;
}
