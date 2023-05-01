class Solution {
public:
    int arrangeCoins(int n) {
        long long int lo=0,hi=n;
        while(lo<=hi){
            long long int m=(hi+lo)/2;
            long long int sm=m*(m+1)/2;
            if(sm==n) return m;
            else if(n<sm) hi=m-1;
            else lo=m+1;
        }
        return hi;
    }
};
