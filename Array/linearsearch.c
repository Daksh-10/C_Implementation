#include <stdio.h>
// Linear serach in an array
int linearsearch(int arr[], int element, int size)
{
   for (int i = 0; i <= size - 1; i++)
   {
      if (arr[i] == element)
      {
         printf("%d exists in the array at index %d", element, i);
      }
   }
}

int binarysearch(int arr[], int element, int size)
{
   int low, mid, high;
   low = 0;
   high = size - 1;
   while (low <= high)
   {
      mid = (low + high) / 2;
      if (arr[mid] == element)
      {
         printf("%d exists at index %d", element, mid);
      }
      if (arr[mid] < element)
      {
         low = mid + 1;
      }
      else
      {
         high = mid - 1;
      }
   }
}

int main()
{
   int arr[50] = {1, 3, 5, 8, 55, 66, 88, 98, 100};
   int element = 100;
   int size = 9;
   binarysearch(arr, element, size);
   return 0;
}