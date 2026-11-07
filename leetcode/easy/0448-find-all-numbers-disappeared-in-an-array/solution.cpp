class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Step 1: Mark visited indices by negating the value at that index
        // for (int i = 0; i < nums.size(); ++i) {
        //     int idx = abs(nums[i]) - 1;
        //     if (nums[idx] > 0) {
        //         nums[idx] = -nums[idx];
        //     }
        // }

        // // Step 2: Any index with a positive number was never visited
        // vector<int> result;
        // for (int i = 0; i < nums.size(); ++i) {
        //     if (nums[i] > 0) {
        //         result.push_back(i + 1);
        //     }
        // }

        // return result;
        int n=nums.size();
        vector<int> freq(n+1,0);
        vector<int> ans;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};