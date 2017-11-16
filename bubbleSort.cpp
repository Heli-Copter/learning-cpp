//Bubble sort is a stable, in-place sorting algorithm that is named for the way smaller or larger elements “bubble” to the top of the list. Although the algorithm is simple, it is too slow and impractical for most problems even when compared to insertion sort and is not recommended when n is large.

//The only significant advantage that bubble sort has over most other implementations, even quicksort, but not insertion sort, is that the ability to detect if the list is already sorted. When the list is already sorted (best-case), the complexity of bubble sort is only O(n).

#include <iostream>

void bubbleSort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 5, 8, 4, 1, 9, -2};
    int n = sizeof(arr) / sizeof(*arr);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}