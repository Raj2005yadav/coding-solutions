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