class Solution {
public:
    int result = INT_MAX;
    
    int n;
    
    void solve(int index,vector<int>& cookies,vector<int>&children,int k){
            
        if(index>=n){
            int unfairness = *max_element(children.begin(),children.end());
            
            result = min(result,unfairness);
            
            return;
        }
        
        int cookie = cookies[index];
        
        for(int i=0;i<k;i++){
            
            children[i] += cookie;
            
            solve(index+1,cookies,children,k);
            
            children[i] -=cookie;
                
        }
        
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>children(k,0);
        
        n = cookies.size();
        
        solve(0,cookies,children,k);
        
        return result;
    }
};