class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lo=1,hi=nums.size();
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int cnt=0;
            for(auto i:nums){
                if(i>=mid) cnt+=1;
            }
            if(cnt==mid)return mid;
            else if(cnt<mid) hi=mid-1;
            else lo=mid+1;
        }
        return -1;
    }
};
