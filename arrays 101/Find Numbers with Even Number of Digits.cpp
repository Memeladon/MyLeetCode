// Given an array nums of integers, return how many of them contain an even number of digits.
// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/

class Solution {
public:
    int findNumbers(vector<int>& nums)
    {
        int ans = 0;
        for (int iter = 0, counter = 0; iter < nums.size(); iter++) 
        {
            while (nums[iter] > 0)
            {
                counter++;
                nums[iter] = nums[iter]/10;
            }
            if (counter % 2 == 0) ans++;
            counter = 0;
        }
        return ans;
    }
};
