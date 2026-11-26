class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0}; // ASCII table covers both 'A'-'Z' and 'a'-'z'
        
        for (char c : s) {
            freq[c]++;
        }
        
        int length = 0;
        bool hasOdd = false;
        
        for (int count : freq) {
            if (count % 2 == 0) {
                length += count;
            } else {
                length += count - 1;
                hasOdd = true;
            }
        }
        
        // Add 1 if we have any leftover odd character to place in the center
        if (hasOdd) {
            length += 1;
        }
        
        return length;
    }
};