Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell 
one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.

Example 1:

Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.
Example 2:

Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.




class Solution {
public:
    int maxProfit(vector<int>& prices) {

        
//           int len=prices.size();
        
//         if(len==0) return 0;
        
//         vector<int> res;
        
//         for(int i=0;i<len;i++){
//             int max=0;
//             for(int j=i+1;j<len;j++){
                
//                 if(max<prices[j]-prices[i]){
                    
//                     max=prices[j]-prices[i];
//                 }
//             }
            
//             res.push_back(max);
//         }
        
//         int len1=res.size();
//         int max1=0;
//         for(int i=0;i<len1;i++){
            
//             if(max1<res[i]){
                
//                 max1=res[i];
//             }
//         }
        
//         return max1;     //////////////////////////////////自己第一想法，但用时较长，O(n^2)的复杂度,耗时太多
        
        
           int n=prices.size();
        if (n<2) return 0;
        int mp=0,t=0;
        for (int i=1;i<n;i++) {
            //buy at a start point and accumulative difference
            t+=(prices[i]-prices[i-1]);
            //until buying at this start point start yielding negative gain, but at next point
            if (t<0) 
                t=0;
            mp=max(mp,t);
        }
        return mp;
        
        
        
        
        
    }
};





