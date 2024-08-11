#include <stdio.h>
#include <stdlib.h>
// Stack using linked list
struct stacknode
{
    int data;
    struct stacknode *next;
};

struct stacknode *push(struct stacknode *head, int data)
{
    struct stacknode *push = (struct stacknode *)malloc(sizeof(struct stacknode));
    push->data = data;
    push->next = head;

    return push;
}

void pop(struct stacknode *head)
{
    printf("the popped element is : %d", head->data);
    free(head);
}

void isEmpty(struct stacknode *head)
{
    if (head == NULL)
    {
        printf("The stack is Empty");
    }
    else
    {
        printf("the stack is not empty");
    }
}

/*  void isFull(struct stacknode*head){

      if(top==NULL){
          printf("The stack is Empty");
      }
      else{
          printf("the stack is not empty");
      }
  }*/

int peek(struct stacknode *head, int index)
{
    struct stacknode *ptr = head;
    for (int i = 0; i < index + 1; i++)
    {
        if (i == index)
        {
            return ptr->data;
        }
        ptr = ptr->next;
    }
}
int main()
{
    struct stacknode *top = (struct stacknode *)malloc(sizeof(struct stacknode));
    struct stacknode *second = (struct stacknode *)malloc(sizeof(struct stacknode));
    struct stacknode *third = (struct stacknode *)malloc(sizeof(struct stacknode));
    struct stacknode *fourth = (struct stacknode *)malloc(sizeof(struct stacknode));

    top->data = 5;
    top->next = second;

    second->data = 10;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    int peeked = peek(top, 3);
    printf("the peeked element is %d", peeked);
    return 0;
}