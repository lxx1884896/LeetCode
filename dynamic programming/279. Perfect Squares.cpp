Given a positive integer n, find the least number of perfect square numbers 
(for example, 1, 4, 9, 16, ...) which sum to n.

Example 1:

Input: n = 12
Output: 3 
Explanation: 12 = 4 + 4 + 4.
Example 2:

Input: n = 13
Output: 2
Explanation: 13 = 4 + 9.





class Solution {
public:
    int numSquares(int n) {
        
//         int count=0;
        
//         while (n!=0){
            
            
//             for(int i=0;i<sqrt(n);i++){
                
//                 if(i*i==n)   {return 1+count;}
//                 if(i*i<n)    {continue;}
//                 if(i*i>n){
                    
//                     n-=(i-1)*(i-1);
//                     count++;
//                     i=0;
//                 }
//             }
//         }
        
//         return count;///////时间超过限制，可能能运行成功 ？  未具体测试
        
        
        
        
        
        
     //下面是动态规划解法
        // while (n % 4 == 0) n /= 4;
        // if (n % 8 == 7) return 4;
        // vector<int> dp(n + 1, INT_MAX);
        // dp[0] = 0;
        // for (int i = 0; i <= n; ++i) {
        //     for (int j = 1; i + j * j <= n; ++j) {
        //         dp[i + j * j] = min(dp[i + j * j], dp[i] + 1);
        //     }
        // }
        // return dp.back();
        
        
        
        
        
        
        //下面是数学解法，需要用到四平方和定理，技巧性较高，但用时最短
        while (n % 4 == 0) n /= 4;
        if (n % 8 == 7) return 4;
        for (int a = 0; a * a <= n; ++a) {
            int b = sqrt(n - a * a);
            if (a * a + b * b == n) {
                return !!a + !!b;
            }
        }
        return 3;
        
        
        
        
        
        
    
        
    }
};
