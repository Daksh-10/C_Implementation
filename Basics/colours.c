#include <stdio.h>
// Total number of different colours, we are given number of drops of different colours, two different colours creates a new colour if there are more than one drop of respective combination of colour.
int main()
{

    int x = 0, y = 0, z = 0;
    int sec1 = 0;
    int sec2 = 0;
    int sec3 = 0;
    printf("enter drops of red,green,blue\n");
    scanf("%d,%d,%d", x, y, z);
    if (x == 0 || x == 1)
    {
        x = x;
    }

    if (y == 0 || y == 1)
    {
        y = y;
    }

    if (z == 0 || z == 1)
    {
        z = z;
    }

    if (x >= 2 && y >= 2)
    {
        sec1 = 1;
        x = 1;
        y = 1;
    }

    if (y >= 2 && z >= 2)
    {
        sec2 = 1;
        y = 1;
        z = 1;
    }

    if (x >= 2 && z >= 2)
    {
        sec3 = 1;
        x = 1;
        z = 1;
    }
    int t = (x + y + z + sec1 + sec2 + sec3);
    printf("\nTotal no. of different colours are: %d", t);

    return 0;
}
