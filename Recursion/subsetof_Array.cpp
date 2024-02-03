/*
    SUBSET OF STRING OF SIZE == K
*/

#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>&nums , vector<int>ans , int i){
    if(i == nums.size()){
            for(int i=0;i<ans.size(); i++){
                cout<<ans[i];
            }   
            cout<<endl;
        return;
    }
    subset(nums, ans , i+1);
    ans.push_back(nums[i]);
    subset(nums, ans , i+1);
}
int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>ans;
    int k=2;
    subset(nums,ans,0);
}