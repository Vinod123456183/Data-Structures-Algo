// Method1 - OverWriting
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
using namespace std;
void display(vector <int> &nums){
        for(int i=0; i<nums.size(); i++) cout<<nums[i]<<" ";
}
// void function(vector <int>& nums){
// }
int main(){
vector<int>nums = {0 , 2 ,1,0 ,1 , 1 ,2 , 0 , 0 , 1 , 2 ,0};
    int zero=0;
    int one=0;
    int two=0;
    vector<int>v;
    int i=0;
    int j=nums.size()- 1;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 0) zero++;
        else if(nums[i] == 1) one++;
        else two++;
    }
    for(int i=0; i<nums.size(); i++){
        if(i < zero)    nums[i] = 0;
        else if (i < zero + one)    nums[i] =1;
        else nums[i] =2;
    }
// function(nums);
display(nums);

}
