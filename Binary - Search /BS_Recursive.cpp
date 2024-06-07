#include<bits/stdc++.h>
using namespace std;
int BS(int arr [] , int x ,   int low , int high )  {
    
    if(low > high) 
        return -1;
        
    int mid = (low+high)/2;
    
    if(arr[mid] == x)
        return mid;
        
    else if(arr[mid] > x)  
        return BS(arr , x , low , mid - 1 );
    else 
        return BS(arr , x , mid + 1 , high );
    
}
int main() {
    int arr[] = {1,3,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x = 10; 
    cout << BS(arr , x , 0  , n - 1);
}
