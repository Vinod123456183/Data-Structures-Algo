#include <iostream>

class Solution {
public:
    void quickSort(int arr[], int low, int high) {
        if (low > high)
            return;
        int parti = partition(arr, low, high);
        quickSort(arr, low , parti - 1);
        quickSort(arr , parti + 1 , high);
    }

    int partition(int arr[], int low, int high) {
        int i = low - 1;
        int pivot = arr[high];
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;
        return i;
    }
};

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    Solution solution;

    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Given array is \n";
    printArray(arr, arr_size);

    solution.quickSort(arr, 0, arr_size - 1);

    std::cout << "Sorted array is \n";
    printArray(arr, arr_size);

    return 0;
}
