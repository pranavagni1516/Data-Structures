class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        map<vector<int>,int>mp;
        for(auto it:grid){
            mp[it]++;
        }

        for(int j=0;j<grid[0].size();j++){
            vector<int>v;
            for(int i=0;i<grid.size();i++){
                v.push_back(grid[i][j]);
            }
            count+=mp[v];
        }
        return count;
    }
};