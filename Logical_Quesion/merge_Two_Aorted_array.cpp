/*
    write a cpp to merge two sorted array 
    without sort function
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;
int main(){
    vector<int>v1 = {2,3};
    vector<int>v2 = {1,4,5,9 ,12 ,20};
    int m = v1.size();
    int n = v2.size();
    vector<int> x (m + n);
    int i = 0; 
    int j = 0;
    int k = 0;
    while(i<m && j<n){
        if(v1[i] < v2[j]){
            x[k] = v1[i];
            i++;
            k++;
        }
        else{
		    x[k] = v2[j];
		    j++;
            k++;
		}
    }

    if(i == m){
        // {2,3};
        // {1,4,5,9 ,12 ,20};
        while(j< n){
            x[k] = v2[j];
            j++;
            k++;
        }
    }

    if(j == n){
        while(i< m){
            x[k] = v1[i];
            i++;
            k++;
        }
    }

    for(int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";	
	}
}

