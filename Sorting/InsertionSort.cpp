#include <iostream>

class Solution {
public:
    void insert(int arr[], int i) {
        // code here
    }

    void insertionSort(int arr[], int n) {
        int i = 0;
        while (i < n - 1)  {
            int j = i + 1;
            int k = i;
            while (k >= 0 && arr[k] > arr[j]) {
                int tem = arr[k];
                arr[k] = arr[j];
                arr[j] = tem;
                k--;
                j--;
            }
            i++;
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

    solution.insertionSort(arr, arr_size);

    std::cout << "Sorted array is \n";
    printArray(arr, arr_size);

    return 0;
}
