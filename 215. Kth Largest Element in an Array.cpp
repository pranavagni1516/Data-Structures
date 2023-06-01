class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans=0;
        priority_queue<int>pq(nums.begin(),nums.end());
        while(k--){
            ans=pq.top();
            pq.pop();
        }
        return ans;
    }
};