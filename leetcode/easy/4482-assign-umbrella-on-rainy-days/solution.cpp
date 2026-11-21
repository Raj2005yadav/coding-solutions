class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string> answer(n,"None");

        int alicecount=0;
        int bobcount=0;

        for(int i=0;i<n;i++){
            if(rain[i]==0)continue;
            bool aliceneeds=(i<n-1 && rain[i+1]==1);
            bool bobneeds = true;
            if(aliceneeds && bobneeds){
                if(alicecount<=bobcount){
                    answer[i]="Alice";
                    alicecount++;
                }
                else{
                    answer[i]="Bob";
                    bobcount++;
                }
            }else{
                answer[i]="Bob";
                bobcount++;
            }
           
        }
         return answer;
    }
};