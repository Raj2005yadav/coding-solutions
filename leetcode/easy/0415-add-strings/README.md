# Add Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two non-negative integers, `num1` and `num2` represented as string, return  *the sum of*  `num1`  *and*  `num2`  *as a string*.

You must solve the problem without using any built-in library for handling large integers (such as `BigInteger`). You must also not convert the inputs to integers directly.

 

Original
C++
 **Example 1:** 

```
Input: num1 = "11", num2 = "123"
Output: "134"

```

 **Example 2:** 

```
Input: num1 = "456", num2 = "77"
Output: "533"

```

 **Example 3:** 

```
Input: num1 = "0", num2 = "0"
Output: "0"

```

 

 **Constraints:** 

- 1 <= num1.length, num2.length <= 104
- num1 and num2 consist of only digits.
- num1 and num2 don't have any leading zeros except for the zero itself.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 44.23%)  
**Memory:** 9.1 MB (beats 51.29%)  
**Submitted:** 2026-11-20T16:24:24.373Z  

```cpp
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;

        int carry=0;
        string ans="";

        while(i>=0 || j>=0 || carry){
            int sum=carry;

            if(i>=0){
                sum+=num1[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=num2[j]-'0';
                j--;
            }
            ans+=(sum%10)+'0';
            carry=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/add-strings/)