// Printing key value using map

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    map<int,int>mp;
    mp[1]=10;
    mp[2]=20;
    mp[3]=30;
    map<int,int>::iterator it = mp.begin();
    while(it != mp.end()){
        cout<<it->first << " - "<< it->second << endl;
        it++;
    }
}
