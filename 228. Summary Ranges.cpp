class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int n=nums.size();

        if(!n)return ans;

        for(int i=0;i<n;){
            int start=i,end=i;
            while(end+1<n && nums[end+1] == nums[end]+1)end++;
            if(start<end)ans.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
            else ans.push_back(to_string(nums[start]));
            i=end+1;
        }
        return ans;
    }
};