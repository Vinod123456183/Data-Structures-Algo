// Its A leetcode Question also
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    sort(nums.begin(),nums.end());  //nlgn
        int n = nums.size();
        int first = -1 , last = -1;
        int low = 0 , high = n-1;
        // int target = 1 ;  // to Check Occurance of which element
        while(low <= high) {
            int mid = (low+high)/2;
            if(nums[mid] == target) {
                first = mid;
                high = mid-1; // because first pos will be on left side
            }
            else if(nums[mid] < target)  low = mid+1;
            else  high = mid-1;
        }
        low = 0;
        high = n-1;
        while(low <= high) {
            int mid = (low+high)/2;
            if(nums[mid] == target) {
                last = mid;
                low = mid+1; // because last pos will be on right side
            }
            else if(nums[mid] < target)   low = mid+1;
            else  high = mid-1;
        }
        cout <<  last - first + 1 ;
}
