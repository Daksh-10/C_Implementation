#include <stdio.h>
#include <stdlib.h>

// Circular linked list
struct node
{
    int data;
    struct node *next;
};

void cirtravs(struct node *head)
{
    struct node *p = head;
    do
    {
        printf("Element is: %d\n", p->data);
        p = p->next;
    } while (p != head);
    printf("\n");
}
struct node *insertion(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = data;

    struct node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    fourth->next = head;
    cirtravs(head);
    head = insertion(head, 54);
    head = insertion(head, 69);
    head = insertion(head, 420);
    cirtravs(head);

    return 0;
}