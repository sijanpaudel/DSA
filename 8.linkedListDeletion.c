//LinkedListDeletion
#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};
void linkedListTraversal(struct Node* head)
{
  struct Node* ptr;
  ptr=head;
  while(ptr!=NULL)
  {
    printf("Element %d\n",ptr->data);
    ptr=ptr->next;
  }
}
struct Node* deleteFirst(struct Node* head)
{
  struct Node *ptr;
  ptr=head;
  head=head->next;
  free(ptr);
  return head;
}
struct Node* deleteBetween(struct Node* head, int index)
{
  struct Node *p=head;
  struct Node *q=p->next;
  int i=0;
  while(i<index-1)
  {
    p=p->next;
    q=q->next;
    i++;
  }
  p->next=q->next;
  free(q);
  return head;
}
struct Node* deleteEnd(struct Node* head)
{
  struct Node *p=head;
  struct Node *q=p->next;
  while(q->next!=NULL)
  {
    p=p->next;
    q=q->next;
  }
  p->next=NULL;
  free(q);
  return head;
}
int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  head=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  head->data=12;
  head->next=second;
  second->data=13;
  second->next=third;
  third->data=19;
  third->next=NULL;
  printf("\nBefore deletion\n");
  linkedListTraversal(head);
  printf("\nAfter Traversal\n");
  head=deleteBetween(head,1);
  linkedListTraversal(head);

}
