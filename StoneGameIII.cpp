class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n=stoneValue.size();
        vector<int>score(n,0);

        for(int i=n-1;i>=0;i--){
            int take=0;
            int best=INT_MIN;
            for(int j=0;j<3 && i+j<n;j++){
                take += stoneValue[i+j];
                int oppo = (i+j+1<n) ? score[i+j+1] : 0 ;
                best=max(best,take-oppo);
            }
            score[i]=best;
        }

        return (score[0]>0) ? "Alice" : (score[0]==0) ? "Tie" : "Bob";
    }
};