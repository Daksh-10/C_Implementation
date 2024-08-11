#include <stdio.h>
#include <stdlib.h>
// Deletion in linked list

struct node
{
  int data;
  struct node *next;
};

struct node *deletefirst(struct node *head)
{
  struct node *ptr = head;
  head = head->next;
  free(ptr);
  return head;
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

struct node *deleteinbetween(struct node *head, int index)
{
  struct node *p;
  struct node *q;
  p = head;
  q = head->next;
  int i = 0;
  while (i != index - 1)
  {
    p = p->next;
    q = q->next;
    i++;
  }
  p->next = q->next;
  free(q);
  return head;
};

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
  int index = 2;
  head = deleteinbetween(head, index);
  traversal(head);

  return 0;
}