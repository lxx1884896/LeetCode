![image](https://github.com/lxx1884896/LeetCode/blob/master/images/3.jpg)

<br><br><br>

```c++
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.length();
        if(len==0) return 0;
        map<char,int> m;
        for(int i=0;i<len;i++){
            
            m[s[i]]=-1;
        }
        int max_len=0,pre=-1;
        for(int i=0;i<len;i++){
            
           if(m[s[i]]>pre)
               
              
               pre=m[s[i]];
               m[s[i]]=i;
               max_len= max (max_len,i-pre);
            
        }
        
        return max_len;
        
        
        
    }
};
```

