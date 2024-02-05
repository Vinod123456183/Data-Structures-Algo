// REverse array using recursion

#include <bits/stdc++.h>
using namespace std;

void rev(vector<int>&v , int low , int high)  {

    // int l  = 0 , high = v.size()-1;
    if(low>high)return ; 
    swap(v[low++] , v[high--]);
    rev(v , low+1 , high-1);

}

int main(){

vector<int>v{1,2,3,4,6,7,8};
int low = 0;
rev(v , low , v.size()-1);
for(int i =0 ; i <v.size(); i++ ) cout<<v[i]<<" ";
// for(int i =0 ; i <v.size(); i++ ) cout<<v[i]<<" ";

    
    
}
