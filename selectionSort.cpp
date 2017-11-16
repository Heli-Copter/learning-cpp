// Selection sort is a unstable, in-place sorting algorithm known for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited. It can be implemented as a stable sort. It has O(n^2) time complexity, making it inefficient to use on large lists. Among simple average-case O(n^2) algorithms, selection sort almost always outperforms bubble sort and generally performs worse than the similar insertion sort.

//The biggest advantage of using selection sort is that we only need maximum n swaps (memory write) where n is the length of the input. insertion sort, on the other hand, takes O(n^2) number of writes. This can be very important if memory write operation is significantly more expensive than memory read operation, such as with Flash memory, where every write lessens the lifespan of the memory.

#include <iostream>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallestIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        if (i != smallestIndex)
        {
            arr[i] = arr[smallestIndex] + arr[i];
            arr[smallestIndex] = arr[i] - arr[smallestIndex];
            arr[i] = arr[i] - arr[smallestIndex];
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
    selectionSort(arr, n);
    printArray(arr, n);

    
    return 0;
}