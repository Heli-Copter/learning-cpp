//  Insertion sort is stable, in-place sorting algorithm that builds the final sorted array one item at a time. It is not very best in terms of performance but it is more efficient in practice than most other simple O(n^2) algorithms such as selection sort or bubble sort. Insertion sort is also used is used in Hybrid sort which combines different sorting algorithms to improve performance.

// It is also a well known online algorithm as it can sort a list as it receives it. In all other algorithms we need all elements to be provided to the sorting algorithm before applying it. But an insertion sort allows we to start with partial set of elements, sorts it (called as partially sorted set), and if we want, we can insert more elements (these are the new set of elements that were not in memory when the sorting started) and sorts these elements too. In real world, data to be sorted is usually not static, rather dynamic. If even one additional element is inserted during the sort process, other algorithms don’t respond easily. But only this algorithm is not interrupted and can respond well with the additional element.

#include <iostream>

void insertionSort (int arr[], int n) {
    for(int i = 1; i < n ; i++) {
        int value = arr[i];
        int position = i;
        for(int j = 0; j < i; j++) {
            if(value > arr[j] && value <= arr[j+1]) {
                int nextVal = arr[j+1];
                position = j;
            }
        }
        arr[position] = value;
    }
}

void printArray (int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3, 8, 5, 4, 1, 9, -2};
    int n = sizeof(arr)/sizeof(*arr);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}