// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) 
    {
        for (int iter = arr.size() - 1; iter >= 0; iter--)
            if (arr[iter] == 0) {
                arr.insert(arr.begin() + iter, 0);
                arr.pop_back();
            }

    }
};
