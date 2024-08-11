#include <stdio.h>
#include <stdlib.h>
// Queue Linked List
struct node
{
    int data;
    struct node *next;
};

void enqueue(struct node *f, struct node *r, int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("The queue is full");
    }
    else
    {

        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = n;
            r = n;
            printf("The enqueued element is %d\n", n->data);
        }
        else
        {
            r->next = n;
            r = n;
            printf("The enqueued element is %d\n", n->data);
        }
    }
}

int dequeue(struct node *f)
{
    struct node *p = f;
    if (f == NULL)
    {
        printf("Queue is Empty");
    }
    else
    {
        f = f->next;
        int val = p->data;
        free(p);

        return val;
    }
}

int main()
{
    struct node *f = NULL;
    struct node *r = NULL;
    enqueue(f, r, 34);
    enqueue(f, r, 4);
    enqueue(f, r, 3);
    printf("%d\n", dequeue(f));
    printf("%d\n", dequeue(f));
    printf("%d\n", dequeue(f));
    return 0;
}