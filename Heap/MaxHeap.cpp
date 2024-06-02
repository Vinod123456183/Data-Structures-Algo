// Create Min Heap HW

// array diya hoga aur we have to statt from index 1 aur parent aur unke child 
// ko sahi postiton me rakhna hai

// for Creating heap the time complextit will be nlogn

#include<bits/stdc++.h>

using namespace std;

class MaxHeap {

    int * arr;
    int size = 0;

    int total_size ;

    public : 

    MaxHeap(int n)  {

        arr = new int[n];
        size = 0 ;

        total_size = n;

    }
    
    void Insert(int val) {
        if(size == total_size)  {
            cout << "Heap OverFlow" << endl;
            return;
        }
        

        arr[size] = val;
        int index = size;
        size++;

        while(index > 0 and arr[(index-1)/2] < arr[index])
        {
            swap(arr[index] , arr[(index-1)/2]);
            index = (index-1)/2;
        }

        cout << arr[index] << " is inserted into heap" << endl;
    }


    void Print()  {

        for(int it = 0 ; it < size; it++) 

            cout << arr[it] << " ";

        cout << endl;
    }


    void Heapify(int index)  {

        int largest = index ;

        int left = 2 * index + 1;

        int right = 2 * index + 2;


        // maybe left Child not esist 

        if(left < size and arr[left] > arr[largest])

            largest = left;
        
        if(right < size and arr[right] > arr[largest])

            largest = right;

        if(largest != index) {
            swap(arr[index] , arr[largest]);
            Heapify(largest); // iss index pr jaao aur ise sahi  kro 
        }
        
    }

    void Delete()  {

        if(size == 0)  {

            cout << "Heap UnderFlow" <<endl ;

            return ;
        }

        cout << arr[0] << " Deleted From Heap" << endl;

        arr[0] = arr[size - 1];

        size -- ;

        if(size == 0) 
            return;

        Heapify(0);

    }
};

int main()  {

    MaxHeap H1(6);

    H1.Insert(91);
    H1.Insert(5);
    H1.Insert(885);
    H1.Insert(15);
    H1.Insert(58);
    H1.Delete();
    H1.Insert(58);
    // H1.Insert(905);

    H1.Print();


    // Delete Node = Node We Will Delete Will Be The Root Node then Adjust 

    // Root ko Htao Fir LAst Node Wale Ko Usse Replace KRo Fir Do Heapify




}

