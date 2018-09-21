You are a professional robber planning to rob houses along a street. Each house has
 a certain amount of money stashed. All houses at this place are arranged in a circle.
 That means the first house is the neighbor of the last one. Meanwhile, adjacent houses 
 have security system connected and it will automatically contact the police if two adjacent
 houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, 
determine the maximum amount of money you can rob tonight without alerting the police.

Example 1:

Input: [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2),
             because they are adjacent houses.
Example 2:

Input: [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.
			 
			 
			 
			 
			 
class Solution {
public:
    int rob(vector<int>& nums) {
        
//         vector<int> nums1 (nums.begin()+1,nums.end());
//         vector<int> nums2 (nums.begin(),nums.end()-1);
        
//          int len1=nums.size()-1; 
        
//           int len=nums.size();
//         if (len==0) return 0;
//           if (len==1) return nums[0];
//           if (len==2) return max(nums[0],nums[1]);
//       vector<int> f1(len,0);
//         f1[0]=nums1[0],f1[1]=max(nums1[0],nums1[1]);
        
//         for(int i=2;i<len1;i++){
            
//             f1[i]=max(f1[i-1],f1[i-2]+nums1[i]);
//         }
        
//         vector<int> f2(len,0);
//         f2[0]=nums2[0],f2[1]=max(nums2[0],nums2[1]);
        
//         for(int i=2;i<len1;i++){
            
//             f2[i]=max(f2[i-1],f2[i-2]+nums2[i]);
//         }
        
        
       
       
//         return max (f1[len1-1],f2[len1-1]); ////////////////////////方法可行但是超时了！！！！！！
        
        
       
     
  
        if(nums.size()==0)
            return 0;
      if(nums.size()==1) return nums[0];
      if(nums.size()==2)  return max(nums[0],nums[1]);
        int n=nums.size()-1;
        int x=find(nums,0,n-1);
        int y=find(nums,1,n);
        return max(x,y);
    
    
        
        
        
       

        
    }
    
    
    
       int find(vector<int>nums,int l,int r)
    {
           nums[l+1]=max(nums[l],nums[l+1]);
          // vector<int> f(n,0);
          //  f[0]=nums[0];
          // f[1]=max(nums[0],nums[1]);
        
        for(int i=l+2;i<=r;i++)
        {
            nums[i]=max(nums[i-1],nums[i-2]+nums[i]);
        }
        return nums[r];
    }      
};