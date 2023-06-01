class Solution
{
    private:
    void dfs(int node,int vis[],stack<int>&st,vector<int> adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it])dfs(it,vis,st,adj);
        }
        st.push(node);
    }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    int vis[V]={0};
	    stack<int>st;
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i])dfs(i,vis,st,adj);
	    }
	    
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	    return ans;
	}
};