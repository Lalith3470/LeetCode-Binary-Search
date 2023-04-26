/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int i=1,j=n,m=0;
        while(i<=j){
            m=(i+j)/2;
            int v=guess(m);
            if(v==0) return m;
            else if(v==1) i=m+1;
            else j=m-1;
        }
        return 0;
    }
};
