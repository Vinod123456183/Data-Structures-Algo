#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void so(vector<int>&v , int n) {

    if(n == 0) {
        return;
    }

    for(int i=0; i<n; i++) {
        if(v[i]>v[i+1]) {
            swap(v[i],v[i+1]);
        }
    }
    so(v,n-1);
}
int main() {
    vector<int>v={5,4,3,2,1,0,-1,-100};
    for(int  i= 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout << endl; 
    
    so(v,v.size());
    
    for(int  i= 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
