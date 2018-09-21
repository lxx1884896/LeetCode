Given an integer array nums, find the contiguous subarray within an array 
(containing at least one number) which has the largest product.

Example 1:

Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.








class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int len=nums.size();
        if(len==0) return 0;
        
       int res=nums[0];
        vector<int>f(len,0),g(len,0);
        f[0]=nums[0];
        g[0]=nums[0];
        for(int i=1;i<len;i++){
            
            f[i]=max(nums[i],max(f[i-1]*nums[i],g[i-1]*nums[i]));
            g[i]=min(nums[i],min(f[i-1]*nums[i],g[i-1]*nums[i]));
            res=max(res,f[i]);
        }
        
        return res;
    }
};
