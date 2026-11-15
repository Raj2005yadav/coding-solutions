class Solution {
public:
    long long dfs(int u,vector<vector<int>>& child,vector<int>& op,vector<int>& score){
          long long total=score[u];
        long long mn= LLONG_MAX;

        for(int v: child[u]){
            long long sub=dfs(v,child,op,score);

            total+=sub;
            mn=min(mn,sub);
        }
        if(child[u].empty()){
            return score[u];
        }
        if(op[u]==1){
            total-=mn;
        }
        else if(mn<0){
            total-=mn;
        }
        return total;
    }
    int maxScore(vector<int>& parent, vector<int>& op, vector<int>& score) {
      int n=parent.size();
        vector<vector<int>>child(n);

        for(int i=1;i<n;i++){
            child[parent[i]].push_back(i);
        }
        return dfs(0,child,op,score);
    }
};