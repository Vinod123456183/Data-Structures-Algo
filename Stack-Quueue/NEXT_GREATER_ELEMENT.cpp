// Next Smallest Element


#include<bits/stdc++.h>
using namespace std;

int main( ) {

    vector<int>nums = {11,19,2,6,1,20};

    stack<int>st;

    vector<int>ans(nums.size() , -1);
    for(int i = 0 ;i <nums.size(); i++) {
        while(!st.empty() and nums[i] > nums[st.top()]) {

            ans[st.top()] = nums[i];
            st.pop();

        }
        st.push(i);
    }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i] <<" ";
    }

}
