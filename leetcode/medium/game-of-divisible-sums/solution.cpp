class Solution {
public:
    long long maxDifference(vector<int>& nums) {
        int n=nums.size();

        vector<long long>dp(n+2,0);

        for(int i=n-1;i>=0;i--){
            long long one=nums[i];

            if(one%3==0)
            one-=dp[i+1];
            else
            one+=dp[i+1];

            long long two=LLONG_MIN;
            if(i+1<n){
                two=(long long)nums[i]+nums[i+1];

                if(two%3==0)
                two-=dp[i+2];

                else
                two+=dp[i+2];
            }
            dp[i]=max(one,two);
        }
        return dp[0];
    }
};