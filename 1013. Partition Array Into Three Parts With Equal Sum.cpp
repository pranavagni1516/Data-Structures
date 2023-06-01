class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=0;

        for(int it:arr){
            sum+=it;
        }

        if(sum % 3 !=0)return false;

        int x=sum/3;
        int count=0,sub_sum=0;
        for(int i=0;i<n;i++){
            sub_sum += arr[i];
            if(sub_sum==x){
                count++;
                sub_sum=0;
            }
        }

        if(count>=3)return true;

        return false;
    }
};