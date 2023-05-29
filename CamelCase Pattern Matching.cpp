class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string>ans;
        for(auto it:Dictionary){
            int j=0;
            for(int i=0;i<it.length();i++){
                if(j<Pattern.length() && it[i]==Pattern[j])j++;
                else if(isupper(it[i]))break;
            }
            if(j==Pattern.size()) ans.push_back(it);
        }
        if(ans.size()==0)ans.push_back( "-1");
        return ans;
    }
};