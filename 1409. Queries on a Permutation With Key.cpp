class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>result;
        vector<int>temp;
        for(int i=1;i<=m;i++){
            temp.push_back(i);
        }
        for(auto values:queries){
            int index=find(temp.begin(),temp.end(),values) - temp.begin();
            temp.erase(temp.begin() + index);
            temp.insert(temp.begin(),values);
            result.push_back(index);
        }
        return result;
    }
};