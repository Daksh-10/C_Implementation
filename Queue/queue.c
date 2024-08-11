#include <stdio.h>
#include <stdlib.h>
// Queue using Array
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue overflow");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        return a;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
        return a;
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->f = -1;
    q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    enqueue(q, 12);
    enqueue(q, 13);
    enqueue(q, 15);
    enqueue(q, 16);
    enqueue(q, 17);

    int t = dequeue(q);
    printf("%d\n", t);
    int a = dequeue(q);
    printf("%d\n", a);
    int b = dequeue(q);
    printf("%d\n", b);

    return 0;
}