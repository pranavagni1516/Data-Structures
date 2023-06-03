class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int x=0,y=0,z=0;
        for(auto i:S1){
            x+=i;
        }
        for(auto i:S2){
            y+=i;
        }
        for(auto i:S3){
            z+=i;
        }
        int i=0,j=0,k=0;
        while(i<N1 and i<N2 and i<N3){
            if(x==y and y==z)return x;
            if(x>y or x>z)x-=S1[i++];
            if(y>x or y>z)y-=S2[j++];
            if(z>x or z>y)z-=S3[k++];
        }
        return 0;
    }
};