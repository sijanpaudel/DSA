//LinkedListInsertion
#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
void linkedListTraversal(struct Node *head)
{
  struct Node *ptr=head;
  while (ptr!=NULL) {
    printf("Element %d\n",ptr->data);
    ptr=ptr->next;
  }
}
struct Node* inserAtBeggining(struct Node* head,int data)
{
  struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  ptr->next=head;
  return ptr;
}
struct Node* insertAtIndex(struct Node* head,int data,int index)
{
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  struct Node* p=head;
  int i=0;
  while(i!=index-1)
  {
    p=p->next;
    i++;
  }
  ptr->next=p->next;
  p->next=ptr;
  return head;
}
struct Node* inserAtEnd(struct Node* head,int data)
{
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  struct Node *p=head;
  while(p->next!=NULL)
  {
    p=p->next;
  }
  p->next=ptr;
  ptr->next=NULL;
  return head;
}
int main()
{
  struct Node* head;
  struct Node* second;
  struct Node* third;
  head=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  head->data=12;
  head->next=second;
  second->data=13;
  second->next=third;
  third->data=10;
  third->next=NULL;
  printf("Before Insertion\n");
  linkedListTraversal(head);
  printf("\nAfter Insertion\n");
  head=insertAtIndex(head,100,3);
  linkedListTraversal(head);

}
