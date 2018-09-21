Given a triangle, find the minimum path sum from top to bottom. Each step you may 
move to adjacent numbers on the row below.

For example, given the following triangle

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).






class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int dp [m][m];//={0}
        dp[0][0]=triangle[0][0];
        for(int i=1;i<m;i++){
            
            dp[i][0]=triangle[i][0]+dp[i-1][0];
            dp[i][i]=triangle[i][i]+dp[i-1][i-1];
        }
        
        for(int i=1;i<m;i++){
            
            for(int j=1;j<triangle[i].size()-1;j++){
                
                dp[i][j]=triangle[i][j]+min(dp[i-1][j-1],dp[i-1][j]);//上和下两种方法都可，但是下面的时间复杂度较低
            }
        }
        
        int res=dp[m-1][0];
        for(int j=0;j<m;j++){
            
            res=min(dp[m-1][j],res);
        }
        
        return res;
        
        
//          int m=triangle.size();
//         int dp [m][m];
// //dp[0][0]=triangle[0][0];
//         for(int i=1;i<m;i++){
            
//             triangle[i][0]=triangle[i][0]+triangle[i-1][0];
//             triangle[i][triangle[i].size() - 1]=triangle[i][triangle[i].size() - 1]+triangle[i-1][triangle[i].size() - 2];
//         }
        
//         for(int i=1;i<m;i++){
            
//             for(int j=1;j<triangle[i].size()-1;j++){
                
//                 triangle[i][j]=triangle[i][j]+min(triangle[i-1][j-1],triangle[i-1][j]);
//             }
//         }
        
//         int res=triangle[m-1][0];
//         for(int j=0;j<m;j++){
            
//             // printf("%d   ",triangle[m-1][j]);
            
//             if(triangle[m-1][j]<res){res=triangle[m-1][j];}
//         }
        
//         return res;
        
    }
};