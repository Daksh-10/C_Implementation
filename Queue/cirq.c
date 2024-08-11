#include <stdio.h>
#include <stdlib.h>
// Circular Queue
struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circularqueue *q)
{
    if ((q->r + 1) % (q->size) == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue overflow");
    }
    else
    {
        q->r = (q->r + 1) % (q->size);
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        return a;
    }
    else
    {
        q->f = (q->f + 1) % (q->size);
        a = q->arr[q->f];
        return a;
    }
}
int main()
{
    struct circularqueue *q = (struct circularqueue *)malloc(sizeof(struct circularqueue));
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

    enqueue(q, 68);
    enqueue(q, 924);
    enqueue(q, 42);
    enqueue(q, 373);
    enqueue(q, 43774);
    enqueue(q, 43774);
    enqueue(q, 43774);
    enqueue(q, 43774);
    enqueue(q, 43774);
    enqueue(q, 43774);
    enqueue(q, 43774);
    enqueue(q, 1474);
    return 0;
}