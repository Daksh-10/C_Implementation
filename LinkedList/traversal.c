#include <stdio.h>
#include <stdlib.h>
// Traversal through linked list
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
}

int main()
{
  struct node *head;
  struct node *second;
  struct node *third;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head->data = 7;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 22;
  third->next = NULL;
  traversal(head);
  return 0;
}