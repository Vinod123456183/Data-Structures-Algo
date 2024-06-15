#include<bits/stdc++.h>
using namespace std;
int main() {
    string str = "hello";
    unordered_map<char, int> mp;
    for(auto it : str)  mp[it]++;
    char anss;
  // Note And Remeber This Imp Step
    int ans = INT_MIN;
    for(auto it: mp) {
        if(it.second > ans) {
            ans = it.second;
            anss = it.first;
        }
    }
    cout << anss << " ";
}
