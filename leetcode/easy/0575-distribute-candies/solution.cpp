class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
        int allowedLimit = candyType.size() / 2;
        return min(static_cast<int>(uniqueCandies.size()), allowedLimit);
    }
};