class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>leastPrimeFactor(n+1,0);
        leastPrimeFactor[1]=1;
        
        for(int i=2;i<=n;i++){
            if(leastPrimeFactor[i] == 0){
                leastPrimeFactor[i] = i;
            }
            
            for(int j=2*i ; j<= n;j+=i){
                if(leastPrimeFactor[j]==0){
                    leastPrimeFactor[j]=i;
                }
            }
        }
        
        return leastPrimeFactor;
    }
};