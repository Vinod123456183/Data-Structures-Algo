#include <iostream>

class Solution {
public:
    int select(int arr[], int i) {
        // Implementation of select function goes here
    }

    void selectionSort(int a[], int n) {
        for (int i = 0; i < n; i++)  {
            int k = i;
            for (int j = i; j < n; j++) {
                if (a[k] > a[j])
                    k = j;
            }
            int temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
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

    solution.selectionSort(arr, arr_size);

    std::cout << "Sorted array is \n";
    printArray(arr, arr_size);

    return 0;
}
