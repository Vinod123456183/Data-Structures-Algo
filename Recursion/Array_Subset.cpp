#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>v , int i , vector<int>arr) {
int k = 3;
    if(arr.size() == i) {
        for(int i=0; i<v.size(); i++){  //note to print loop req
            cout << v[i];
        }
        cout<<endl;                     //note endl is req after every call
        return;
    }
    int ch = arr[i];
    subset(v ,  i+1  ,  arr);
    v.push_back(ch);                    //main 
    subset(v ,  i+1  ,  arr);           //i was pusshing in recursion
}

int main() {
    vector<int>v;
    vector<int>arr={1,2,3};
    subset(v,0,arr);
}
