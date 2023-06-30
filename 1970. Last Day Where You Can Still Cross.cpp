class Solution {
public:
    vector<pair<int,int>> dir{{0,1},{0,-1},{-1,0},{1,0}};

    bool check(int row, int col,int t, vector<vector<int>>& cells){
        vector<vector<int>>grid(row,vector<int>(col,0));

        for(int i=0;i<t;i++) grid[cells[i][0]-1][cells[i][1]-1] = 1;

        queue<pair<int,int>> q;
        for(int i=0;i<col;i++){
            if(grid[0][i] == 0){
                q.push({0,i});
                grid[0][i] = 1;
            }
        }

        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int r = node.first , c = node.second;
            for(auto it:dir){
                int nr = r + it.first , nc = c + it.second;

                if(nr >= 0 && nr < row && nc >= 0 && nc < col && grid[nr][nc] == 0){
                    
                    if(nr == row -1 )return true;
                    
                    grid[nr][nc] = 1;


                    q.push({nr,nc});
                }
            }
        }

        return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int left = 0 , right = cells.size() , ans = 0;
        while(left<=right){
            
            int mid = left + (right-left)/2;

            if(check(row,col,mid,cells)){
                ans = mid;
                left = mid + 1;
            }
            else{
                right = mid-1;
            }

        }
        return ans;
    }
};