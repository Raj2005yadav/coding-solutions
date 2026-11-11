# Excel Sheet Column Title

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `columnNumber`, return  *its corresponding column title as it appears in an Excel sheet*.

For example:

```
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

```

 

Original
C++
 **Example 1:** 

```
Input: columnNumber = 1
Output: "A"

```

 **Example 2:** 

```
Input: columnNumber = 28
Output: "AB"

```

 **Example 3:** 

```
Input: columnNumber = 701
Output: "ZY"

```

 

 **Constraints:** 

- 1 <= columnNumber <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.6 MB  
**Submitted:** 2026-11-11T05:15:45.252Z  

```cpp
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0){
            columnNumber--;

            int rem=columnNumber%26;
            ans+=('A'+rem);         // letter ki ascii value 
            columnNumber/=26;

            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/excel-sheet-column-title/)