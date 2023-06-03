class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        queue<int>q;
        q.push(headID);
        vector<vector<int>>graph(n);

        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1)graph[manager[i]].push_back(i);
        }

        int ans=informTime[headID];

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int i=0;i<graph[curr].size();i++){
                int next = graph[curr][i];
                q.push(next);
                informTime[next]+=informTime[curr];
                ans=max(ans,informTime[next]);
            }

        }
        

        return ans;
    }
};