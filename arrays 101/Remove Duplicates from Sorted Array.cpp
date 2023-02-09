/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same.
*/
// https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
        std::sort(nums.begin(), nums.end());
        auto last = std::unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        return int(nums.size());
        */
        
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return int(nums.size());
        
    }
};
