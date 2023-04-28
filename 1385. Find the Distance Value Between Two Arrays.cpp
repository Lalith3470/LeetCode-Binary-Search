class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0,tmp=1;
        for(auto i:arr1){
            int tmp=0;
            for(auto j: arr2){
                if(abs(i-j)<=d){
                    tmp=1;
                    break;
                }
            }
            if(tmp==0) cnt+=1;
        }
        return cnt;
        
    }
};
