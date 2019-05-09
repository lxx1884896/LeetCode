![image](https://github.com/lxx1884896/LeetCode/blob/master/images/395.jpg)

<br>

<br><br>

```c++
class Solution {
public:
    int longestSubstring(string s, int k) {
        
        int len=s.length();
        if (len==0) return 0;
        //set<int>tmp;
        map<char,int> m;
        for(int i=0;i<len;i++){
            
            m[s[i]]++;
        }
        
        int max_len=0,res=0,begin=0;
        for(int i=0;i<len;i++){
            
           if(m[s[i]]<k){
              res=max(res,longestSubstring(s.substr(begin,i-begin),k)) ;
              begin=i+1;
               
           }
            
        }
        
        if (begin==0) return s.length();//此次递归时s所有元素都>=k
            else res=max(res,longestSubstring(s.substr(begin,len-begin),k)) ;
        
        return res;
        
        
    }
};
```

