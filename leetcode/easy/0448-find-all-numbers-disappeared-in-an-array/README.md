# Find All Numbers Disappeared in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return  *an array of all the integers in the range*  `[1, n]`  *that do not appear in*  `nums`.

 

 **Example 1:** 

```
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

```

 **Example 2:** 

```
Input: nums = [1,1]
Output: [2]

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 105
- 1 <= nums[i] <= n

 

 **Follow up:**  Could you do it without extra space and in `O(n)` runtime? You may assume the returned list does not count as extra space.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 80.85%)  
**Memory:** 54.7 MB (beats 45.85%)  
**Submitted:** 2026-11-07T19:17:23.427Z  

```cpp
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Step 1: Mark visited indices by negating the value at that index
        // for (int i = 0; i < nums.size(); ++i) {
        //     int idx = abs(nums[i]) - 1;
        //     if (nums[idx] > 0) {
        //         nums[idx] = -nums[idx];
        //     }
        // }

        // // Step 2: Any index with a positive number was never visited
        // vector<int> result;
        // for (int i = 0; i < nums.size(); ++i) {
        //     if (nums[i] > 0) {
        //         result.push_back(i + 1);
        //     }
        // }

        // return result;
        int n=nums.size();
        vector<int> freq(n+1,0);
        vector<int> ans;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)