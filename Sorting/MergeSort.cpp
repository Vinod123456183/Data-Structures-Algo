#include <iostream>

class MergeSort {
public:
    void merge(int arr[], int low, int mid, int high) {
        int i = low, k = low;
        int j = mid + 1;
        int B[high + 1];
        while (i <= mid && j <= high) {
            if (arr[i] < arr[j])
                B[k++] = arr[i++];
            else
                B[k++] = arr[j++];
        }
        for (; i <= mid; i++) 
            B[k++] = arr[i];
        for (; j <= high; j++)
            B[k++] = arr[j];
        for (int i = low; i <= high; i++) 
            arr[i] = B[i];
    }

    void mergeSort(int arr[], int low, int high) {
        if (low >= high)
            return;
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
};

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    MergeSort sorter;

    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Given array is \n";
    printArray(arr, arr_size);

    sorter.mergeSort(arr, 0, arr_size - 1);

    std::cout << "Sorted array is \n";
    printArray(arr, arr_size);

    return 0;
}
