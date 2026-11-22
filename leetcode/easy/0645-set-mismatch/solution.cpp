class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;

        for(int x:nums){
            mp[x]++;
        }

        for(auto x:mp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};