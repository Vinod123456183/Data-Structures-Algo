#include<iostream>
#include<vector>
using namespace std;

// void display(int arr[] , int n , int index){
//     if(index == n) return;
//     cout<<arr[index]<<" ";
//     display(arr,n,index+1);
// }

void display2 (vector<int> & v , int index){
    if(index == v.size()) return;
    cout<<v[index]<<" ";
    display2(v,index+1);
}
int main(){
    // int arr[]={1,5,9,6,5,56,52,2,6};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // display(arr,n,0);


    vector<int>v = {1,5,9,6,5,56,52,2,6};
    display2(v,0);
}