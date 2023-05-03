class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            int l=lower_bound(grid[i].rbegin(),grid[i].rend(),0)-grid[i].rbegin();
            cnt+=l;
        }
        return cnt;
    }
};
