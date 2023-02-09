// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order
// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        #include <algorithm>
        #include <array>
        for(int iter =0; iter < nums.size(); iter++){
            nums[iter] *= nums[iter];
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};
