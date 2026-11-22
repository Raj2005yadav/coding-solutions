class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(n==1){
                ans++;
            }
            else if(i==0){
            if(nums[i]>=nums[i+1])ans++;
        }
            else if(i==n-1){
                if(nums[i]>=nums[i-1])ans++;
            }
                else{
                    if(2LL*nums[i]>=(long long)nums[i-1]+nums[i+1])ans++;
                }
        }
        return ans;
                        
    }
   
    
};