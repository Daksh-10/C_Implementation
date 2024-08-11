#include <stdio.h>
#include <stdlib.h>
// Stack using array
struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    /* struct stack s;
     s.size=80;
     s.top=-1;
     s.arr=(int *)malloc(s.size*sizeof(int));*/
    struct stack *s;
    s->size = 2;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s->arr[0] = 5;
    s->top++;

    s->arr[1] = 4;
    s->top++;

    if (isempty(s) == 1)
    {
        printf("The string is empty");
    }
    else
    {
        printf("the string is not empty");
    }
    printf("\n");
    if (isfull(s) == 1)
    {
        printf("The string is full");
    }
    else
    {
        printf("the string is not full");
    }
    return 0;
}