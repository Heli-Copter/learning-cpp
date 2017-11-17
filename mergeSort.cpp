#include <iostream>

void mergeSort(int arr[], int low, int high)
{
    if (high > low)
    {
        int mid = (high + low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(*arr);
    //std::cout << n / 2;
    mergeSort(arr, 0, n - 1);
    return 0;
}