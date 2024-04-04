// Certainly! You can find permutations of an array in C++ using recursion. Here's an example:

#include <iostream>
#include <vector>

using namespace std;

void generatePermutations(vector<int>& nums, int i, vector<vector<int>>& ans) {
    if (i == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int j = i; j < nums.size(); j++) {
        swap(nums[i], nums[j]);
        generatePermutations(nums, i + 1, ans);
        swap(nums[i], nums[j]);
    }
}

int main() {
    vector<int> myArray = {1, 2 , 1}; // Replace with your array

    vector<vector<int>> permutations;
    generatePermutations(myArray, 0, permutations);

    for (const auto& perm : permutations) {
        for (const int& num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


