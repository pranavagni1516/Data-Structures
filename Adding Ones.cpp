class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        vector<int>update(n,0);
        for(int i=0;i<k;i++){
            update[updates[i]-1]++;
        }
        
        int toadd=0;
        
        for(int i=0;i<n;i++){
            toadd+=update[i];
            a[i]+=toadd;
        }
    }
};