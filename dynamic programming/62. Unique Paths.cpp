A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is 
trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

Note: m and n will be at most 100.

Example 1:

Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Right -> Down
2. Right -> Down -> Right
3. Down -> Right -> Right
Example 2:

Input: m = 7, n = 3
Output: 28




// class Solution {
// public:
//     int uniquePaths(int m, int n) {
        
//         if(m==0 ||n==0)  return 0;
        
//         if(m==1 || n==1) return 1;
        
//         int p=max(m-1,n-1);
//         int q=min(m-1,n-1);
//         if(q==1)  return (p+1);
//         double x=1,y=1;
//         p=p+q;
// //         while(q>2){
            
// //             y*=p;
// //             p--;
// //             x*=q;
// //             q--;
// //         }
//        for ( int i=1;i<=q;i++){
//              y*=p-i+1;
            
//              x*=i;
//            //printf("%d  ",x);
             
            
//         }
        
//         return (int)( y/x);
        
        
//     }
// };///////////////////////////////////////////数学方法省时间


class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n, 1);
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[j] += dp[j - 1]; 
                //dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[n - 1];
    }
};



