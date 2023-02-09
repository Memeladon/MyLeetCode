/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,
and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
*/
// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3253/

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
    {
      // as for me, too much memory is being used. Need to recode.
            nums1.resize(m);
            nums2.resize(n);
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
            std::sort(nums1.begin(), nums1.end());
    }
};
