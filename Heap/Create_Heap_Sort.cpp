
// creating heap from array 

// yahan n/2 - 1 yahan se start isliye kiya kyuki 
// humne leaf node ko nahi liya h and we are using step down 
// toh we will not take leaf nodes kyuki step down nhi kr paemge

#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted with node i which is an index in arr[] and size is the heap size
void heapify(vector<int>& arr, int i, int n) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, largest, n);
    }
}

// Function to build a Max-Heap from the array
void buildMaxHeap(vector<int>& arr) {
    int n = arr.size();
    // Index of the last non-leaf node
    int startIdx = (n / 2) - 1;

    // Perform reverse level order traversal from last non-leaf node and heapify each node
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, i, n);
    }
}

// Function to perform heap sort
void Sort(vector<int>& arr, int n) {
    // One by one extract elements
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, 0, i);
    }
}

int main() {
    // Given array
    vector<int> arr = {1, 5, 45, 45, 54, 5, 75, 15, 45, 74, 15, 4};

    // Build the max heap
    buildMaxHeap(arr);

    cout << "Max-Heap array: ";
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;

    // Sort the array using heap sort
    Sort(arr, arr.size());

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
