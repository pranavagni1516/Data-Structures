class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        map<int,int>map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        int max_ele=0,freq=INT_MAX;
        for(auto it:map){
            if(it.second < freq){
                freq=it.second;
                max_ele =it.first;
            }
            else if(it.second == freq){
                max_ele=max(max_ele,it.first);
            }
        }
        return max_ele;
    }
};