# Keyboard Row

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of strings `words`, return  *the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below*.

 **Note**  that the strings are  **case-insensitive**, both lowercased and uppercased of the same letter are treated as if they are at the same row.

In the  **American keyboard** :

- the first row consists of the characters "qwertyuiop",
- the second row consists of the characters "asdfghjkl", and
- the third row consists of the characters "zxcvbnm".

 

Original
C++
 **Example 1:** 

 **Input:**  words = ["Hello","Alaska","Dad","Peace"]

 **Output:**  ["Alaska","Dad"]

 **Explanation:** 

Both `"a"` and `"A"` are in the 2nd row of the American keyboard due to case insensitivity.

 **Example 2:** 

 **Input:**  words = ["omk"]

 **Output:**  []

 **Example 3:** 

 **Input:**  words = ["adsdf","sfd"]

 **Output:**  ["adsdf","sfd"]

 

 **Constraints:** 

- 1 <= words.length <= 20
- 1 <= words[i].length <= 100
- words[i] consists of English letters (both lowercase and uppercase).

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.1 MB (beats 36.40%)  
**Submitted:** 2026-11-12T12:55:40.242Z  

```cpp

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for (int i = 0; i < words.size(); i++) {
            string word = words[i];

            int r1 = 0, r2 = 0, r3 = 0;

            for (int j = 0; j < word.size(); j++) {
                char ch = tolower(word[j]);

                if (row1.find(ch) != string::npos)
                    r1++;
                else if (row2.find(ch) != string::npos)
                    r2++;
                else
                    r3++;
            }

            if (r1 == word.size() ||
                r2 == word.size() ||
                r3 == word.size()) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/keyboard-row/)