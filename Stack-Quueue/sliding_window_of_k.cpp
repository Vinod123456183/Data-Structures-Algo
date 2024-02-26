// Printing window of size k

#include<bits/stdc++.h>

using namespace std;

void print(queue<int>q)  {
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

}

int main() {
    vector<int>v = {1,2,3,4,5,6,7,8};
    queue<int>q;
    
    int k = 3;
    for(int i = 0; i < k-1; i++)
     {
        q.push(v[i]);
    }

    for(int i = k-1; i<v.size(); i++) {
        q.push(v[i]);
        print(q);
        q.pop();
    }


}
