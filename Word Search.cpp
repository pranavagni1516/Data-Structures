class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int index){
        if(index==word.length())return 1;
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[index])return 0;
        
        char temp=board[i][j];
        board[i][j]='@';
        
        bool a = dfs(board,word,i-1,j,index+1);
        bool b = dfs(board,word,i+1,j,index+1);
        bool c = dfs(board,word,i,j-1,index+1);
        bool d = dfs(board,word,i,j+1,index+1);
        
        board[i][j]=temp;
        
        return (a||b||c||d);
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] and dfs(board,word,i,j,0))return 1;
            }
        }
        return 0;
    }
};