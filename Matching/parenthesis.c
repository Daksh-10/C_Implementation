#include <stdio.h>
#include <stdlib.h>
// Parenthesis Matching
struct stack
{
    int size;
    int top;
    char *arr;
};

void push(struct stack *a, char value)
{
    a->top++;
    a->arr[a->top] = value;
}

char pop(struct stack *a)
{
    char val = a->arr[a->top];
    a->top--;
    return val;
}

int isEmpty(struct stack *ptr)
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

int parenthesismatch(char *exp)
{
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            else
            {
                pop(sp);
            }
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *exp = "8*)9+5(";
    if (parenthesismatch(exp) == 1)
    {
        printf("The parenthesis is matching");
    }
    else
    {
        printf("the parenthesis is not matxhing");
    }
    printf("\n");

    return 0;
}