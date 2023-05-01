class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0,j=arr.size();
        while(i<j){
            int m=(i+j)/2;
            if(arr[m]-m-1<k){
                i=m+1;
            }
            else j=m;
        }
        return i+k;
    }
};
