#include <stdio.h>
#include <stdlib.h>
// Insertion in Linked List
struct node
{
  int data;
  struct node *next;
};

void traversal(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("element: %d\n", (*ptr).data);
    ptr = ptr->next;
  }
  printf("\n");
}

struct node *insatbeg(struct node *head, int data)
{
  struct node *bighead = (struct node *)malloc(sizeof(struct node));
  bighead->next = head;
  bighead->data = data;
  return bighead;
}

struct node *insatind(struct node *head, int data, int index)
{
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;
  int i = 0;
  while (i != index - 1)
  {
    p = p->next;
    i++;
  }
  ptr->next = p->next;
  p->next = ptr;
  ptr->data = data;

  return head;
}

int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  head->data = 7;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 22;
  third->next = fourth;

  fourth->data = 88;
  fourth->next = NULL;
  traversal(head);
  head = insatbeg(head, 69);
  traversal(head);
  head = insatind(head, 96, 3);
  traversal(head);

  return 0;
}