# Longest Uncommon Subsequence I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `a` and `b`, return  *the length of the  **longest uncommon subsequence**  between* `a`  *and*  `b`.  *If no such uncommon subsequence exists, return*  `-1` *.* 

An  **uncommon subsequence**  between two strings is a string that is a  **subsequence of exactly one of them**.

 

Original
C++
 **Example 1:** 

```
Input: a = "aba", b = "cdc"
Output: 3
Explanation: One longest uncommon subsequence is "aba" because "aba" is a subsequence of "aba" but not "cdc".
Note that "cdc" is also a longest uncommon subsequence.

```

 **Example 2:** 

```
Input: a = "aaa", b = "bbb"
Output: 3
Explanation: The longest uncommon subsequences are "aaa" and "bbb".

```

 **Example 3:** 

```
Input: a = "aaa", b = "aaa"
Output: -1
Explanation: Every subsequence of string a is also a subsequence of string b. Similarly, every subsequence of string b is also a subsequence of string a. So the answer would be -1.

```

 

 **Constraints:** 

- 1 <= a.length, b.length <= 100
- a and b consist of lower-case English letters.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 5.29%)  
**Memory:** 8.1 MB (beats 42.67%)  
**Submitted:** 2026-11-28T09:37:09.646Z  

```cpp
class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b){
            return -1;
        }
        return max(a.length(), b.length());
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-uncommon-subsequence-i/)