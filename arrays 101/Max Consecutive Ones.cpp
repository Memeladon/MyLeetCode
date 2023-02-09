// Given a binary array nums, return the maximum number of consecutive 1's in the array.
//https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        for (int counter = 0, iter = 0; iter < nums.size(); iter++) {
            if (nums[iter] == 1) counter++;
            else if (nums[iter] == 0) counter = 0;
            if (counter > maxcount) maxcount = counter;
        }
    return maxcount;
    }
};
