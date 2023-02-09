/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
*/
//https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3247/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> :: iterator itr;
        itr = nums.begin();
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(itr);
                itr--;
                i--;
            }
            itr++;
        }
        return nums.size();
        
    }
};
// 0 ms code B-)
