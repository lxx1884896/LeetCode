Given an array nums of n integers, are there elements a, b, c in nums such
 that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]





class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        
        if (!nums.empty() && nums.back() < 0) return {};
        
        int len=nums.size();
        sort(nums.begin(),nums.end());
        
       vector< vector<int>> res;
        
        
        for(int i=0;i<len-2;i++){
            
            
            if(nums[i]>0) break;
            if(i>0&&nums[i]==nums[i-1]){continue;}
            int target=0-nums[i];
            int l=i+1,r=len-1;
            while(l<r){
                if(nums[l]+nums[r]==target){
                    
                    res.push_back({nums[i],nums[l],nums[r]});
                     while(l<r&&nums[l]==nums[l+1]){l++;}
                    while(l<r&&nums[r]==nums[r-1]){r--;}
                    l++;
                    r--;
                   
                }
                else if(nums[l]+nums[r]<target){
                    
                    l++;
                }
                else{r--;}
                
            }
        }
        
        return res;
        
    }
};