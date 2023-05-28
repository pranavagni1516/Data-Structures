class Solution {
public:
    int help(int i,int j,vector<int>&cuts,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(dp[i][j] != -1)return dp[i][j];

        int mini=INT_MAX;

        for(int index=i;index<=j;index++){
            int cost = cuts[j+1] - cuts[i-1] +help(i,index-1,cuts,dp) + help(index+1,j,cuts,dp);
            mini=min(mini,cost); 
        }
        return dp[i][j]=mini;
    }
    int minCost(int n, vector<int>& cuts) {
        int c=size(cuts);
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(c+1,vector<int>(c+1,-1));
        return help(1,c,cuts,dp);
    }
};