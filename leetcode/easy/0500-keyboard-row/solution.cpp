
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
