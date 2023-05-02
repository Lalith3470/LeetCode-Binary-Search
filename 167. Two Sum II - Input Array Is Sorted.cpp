class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>lst;
        for(int i=0;i<numbers.size();i++){
            int t=target-numbers[i];
            int lo=i+1,hi=numbers.size()-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(numbers[mid]==t){
                    lst.push_back(i+1);
                    lst.push_back(mid+1);
                    return lst;
                } 
                else if (numbers[mid]<t) lo=mid+1;
                else hi=mid-1;
            }
        }
        return lst;
    }
};
