class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total=0;

        for(int i=0;i<timeSeries.size();i++){
            if(i==timeSeries.size()-1){
                total+=duration;
            }
            else{
                int gap=timeSeries[i+1]-timeSeries[i];
                total+=min(gap,duration);
            }
        }
        return total;
    }
};