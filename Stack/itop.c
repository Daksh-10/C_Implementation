#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Postfix of infix equation
struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *a)
{
    if (a->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
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

char stacktop(struct stack *a)
{
    return a->arr[a->top];
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

int prec(char a)
{
    if (a == '*' || a == '/')
    {
        return 3;
    }
    else if (a == '+' || a == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isoperator(char a)
{
    if (a == '*' || a == '/' || a == '-' || a == '+')
    {
        return 1;
    }
    return 0;
}

char *itop(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (prec(infix[i]) > prec(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infix = "a-b+t/6";
    printf("the postfix is %s:", itop(infix));
    return 0;
}