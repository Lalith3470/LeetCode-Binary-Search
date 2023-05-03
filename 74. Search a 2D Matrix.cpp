class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int lo=0,hi=matrix[0].size()-1;
        while(lo<n && hi>=0){
            if(matrix[lo][hi]==target) return true;
            else if(matrix[lo][hi]>target) hi--;
            else lo++;
        }
        return false;
    }
};
