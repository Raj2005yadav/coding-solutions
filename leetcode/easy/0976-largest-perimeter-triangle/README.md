# Largest Perimeter Triangle

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return  *the largest perimeter of a triangle with a non-zero area, formed from three of these lengths*. If it is impossible to form any triangle of a non-zero area, return `0`.

 

Original
C++
 **Example 1:** 

```
Input: nums = [2,1,2]
Output: 5
Explanation: You can form a triangle with three side lengths: 1, 2, and 2.

```

 **Example 2:** 

```
Input: nums = [1,2,1,10]
Output: 0
Explanation: 
You cannot use the side lengths 1, 1, and 2 to form a triangle.
You cannot use the side lengths 1, 1, and 10 to form a triangle.
You cannot use the side lengths 1, 2, and 10 to form a triangle.
As we cannot use any three side lengths to form a triangle of non-zero area, we return 0.

```

 

 **Constraints:** 

- 3 <= nums.length <= 104
- 1 <= nums[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 33.91%)  
**Memory:** 25.7 MB (beats 38.00%)  
**Submitted:** 2026-11-20T22:16:23.317Z  

```cpp
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        int ans=0;
        for(int i=n-3;i>=0;i--){
            if(nums[i]+nums[i+1]>nums[i+2]){
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/largest-perimeter-triangle/)