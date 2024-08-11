#include <stdio.h>
#include <stdlib.h>
// All stack operations
struct stack
{
        int size;
        int top;
        int *arr;
};

void isEmpty(struct stack *a)
{
        if (a->top == -1)
        {
                printf("The stack is empty\n");
        }
        else
        {
                printf("The stack is not empty\n");
        }
}

void isFull(struct stack *a)
{
        if (a->top == a->size - 1)
        {
                printf("The stack is full\n");
        }
        else
        {
                printf("The stack is not full\n");
        }
}

void push(struct stack *a, int value)
{
        a->top++;
        a->arr[a->top] = value;
}

int pop(struct stack *a)
{
        int val = a->arr[a->top];
        a->top--;
        return val;
}

int peek(struct stack *st, int i)
{
        if (st->top - i + 1 < 0)
        {
                printf("Elements are less than %d", i);
        }
        else
        {
                return st->arr[st->top - i + 1];
        }
}

int main()
{
        struct stack *st;
        st->size = 10;
        st->top = -1;
        st->arr = (int *)malloc(st->size * sizeof(int));

        isEmpty(st);
        push(st, 23);
        push(st, 3);
        push(st, 203);
        push(st, 25);
        push(st, 69);
        push(st, 13);
        push(st, 344);

        int a = peek(st, 5);
        printf("the peeked value is %d \n", a);

        // for (int i = 0; i < 6; i++)
        // {
        //         printf("Hello");
        // }

        isFull(st);
        return 0;
}