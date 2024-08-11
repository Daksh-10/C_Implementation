#include <stdio.h>
// Pointers execution
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int wngswap(int a, int b)
{
    int temp;
    temp = a;
    b = a;
    b = temp;
}
int main()
{
    int a = 3, b = 4;
    printf("the value of x and y is %d and %d", a, b);
    // wngswap(a,b);
    swap(&a, &b);
    printf("the value of x and y is %d and %d", a, b);
}