# Reverse Vowels of a String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, reverse only all the vowels in the string and return it.

The vowels are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`, and they can appear in both lower and upper cases, more than once.

 

Original
C++
 **Example 1:** 

 **Input:**  s = "IceCreAm"

 **Output:**  "AceCreIm"

 **Explanation:** 

The vowels in `s` are `['I', 'e', 'e', 'A']`. On reversing the vowels, s becomes `"AceCreIm"`.

 **Example 2:** 

 **Input:**  s = "leetcode"

 **Output:**  "leotcede"

 

 **Constraints:** 

- 1 <= s.length <= 3 * 105
- s consist of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 64.56%)  
**Memory:** 10.4 MB (beats 29.34%)  
**Submitted:** 2026-11-19T20:15:29.888Z  

```cpp
class Solution {
public:
    string reverseVowels(string s) {

        string vowels = "";

       
        for(int i = 0; i < s.size(); i++) {

            if(s[i] == 'a' || s[i] == 'A' ||
               s[i] == 'e' || s[i] == 'E' ||
               s[i] == 'i' || s[i] == 'I' ||
               s[i] == 'o' || s[i] == 'O' ||
               s[i] == 'u' || s[i] == 'U') {

                vowels += s[i];
            }
        }

        
        reverse(vowels.begin(), vowels.end());

        
        int j = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == 'a' || s[i] == 'A' ||
               s[i] == 'e' || s[i] == 'E' ||
               s[i] == 'i' || s[i] == 'I' ||
               s[i] == 'o' || s[i] == 'O' ||
               s[i] == 'u' || s[i] == 'U') {

                s[i] = vowels[j];
                j++;
            }
        }

        return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-vowels-of-a-string/)