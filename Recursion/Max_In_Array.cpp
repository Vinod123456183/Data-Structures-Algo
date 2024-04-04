#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
#include<cmath>
using namespace std;
int po(vector<int>&as , int i){
    if(i==as.size()) return INT_MIN;
    return max(as[i] , po(as,i+1));
}
int main() {
    vector<int>x = {1111,2,4503,4,5,6};
    cout << po(x , 0);
}
