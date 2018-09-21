**Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai).n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.**

 **Note: You may not slant the container and n is at least 2**. 





**Example:**

**Input: [1,8,6,2,5,4,8,3,7]**
**Output: 49**







       Solution {
    
    public:
    
        int maxArea(vector<int>& height) {
    
       int maxArea=0;//初始化最大面积
        
        for(int i=0;i<height.size()-1;i++){
            for(int j=i+1;j<height.size();j++){
                
                 int area=(j-i)*(height[i]<height[j]?height[i]:height[j]);//求出所围的面积
                
                 //int area=(j-i)*min(height[i],height[j]);
                 if(area>maxArea){
                     maxArea=area;
                 }
               // maxArea=max(area,maxArea);
                
            }
        }
        return maxArea;
        
    }
    
    };




