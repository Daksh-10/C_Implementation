#include <stdio.h>
#include <stdlib.h>
// Insertion at a given index in an array and shifting all the elements by one to the right of that index
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int indinsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        int temp;
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int size = 5;
    int element = 45;
    int index = 3;
    int arr[100] = {7, 8, 12, 27, 88};
    display(arr, size);
    indinsertion(arr, size, element, 100, index);
    size = size + 1;
    display(arr, size);
    return 0;
}
