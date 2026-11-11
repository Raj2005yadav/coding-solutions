# Isomorphic Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`,  *determine if they are isomorphic*.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Original
C++
 **Example 1:** 

 **Input:**  s = "egg", t = "add"

 **Output:**  true

 **Explanation:** 

The strings `s` and `t` can be made identical by:

- Mapping 'e' to 'a'.
- Mapping 'g' to 'd'.

 **Example 2:** 

 **Input:**  s = "f11", t = "b23"

 **Output:**  false

 **Explanation:** 

The strings `s` and `t` can not be made identical as `'1'` needs to be mapped to both `'2'` and `'3'`.

 **Example 3:** 

 **Input:**  s = "paper", t = "title"

 **Output:**  true

 

 **Constraints:** 

- 1 <= s.length <= 5 * 104
- t.length == s.length
- s and t consist of any valid ascii character.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 21.69%)  
**Memory:** 9.5 MB (beats 7.12%)  
**Submitted:** 2026-11-11T06:01:37.185Z  

```cpp
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        
        int m = s.length();
        
        for(int i = 0; i < m; i++) {
            char ch1 = s[i];
            char ch2 = t[i];
            
            if((mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2) || 
               (mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1)) {
                return false;
            }
            
            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }
        
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/isomorphic-strings/)