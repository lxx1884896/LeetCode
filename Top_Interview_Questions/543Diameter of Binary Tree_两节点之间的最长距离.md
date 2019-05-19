![image](https://github.com/lxx1884896/LeetCode/blob/master/images/543.jpg)

<br><br><br>

```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//方法一，更好理解
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
      
        int depth=1;
        int max_distance=getMaxDistance(root,depth);
        return max_distance;
       
        
    }
    
    int getMaxDistance(TreeNode* curr,int &depth){
        //结点为空，则高度为0，结点最大距离为0
        if(curr==NULL){
            depth=0;
            return 0;
        }
        //递归左子树获取左子树最大结点距离 
        int left_child_max_distance=getMaxDistance(curr->left,depth);
        //通过数组获取左子树递归过程中统计出的子树深度
        int left_child_depth=depth;
        //递归右子树获取右子树最大结点距离
        int right_child_max_distance=getMaxDistance(curr->right,depth);
         //通过数组获取右子树递归过程中统计出的子树深度
        int right_child_depth=depth;
        //通过数组记录当前结点的高度
        depth=max(left_child_depth+1,right_child_depth+1);
        //比较 左子树最大结点距离、右子树最大结点距离、经过当前结点到达左右子树最深结点的路径距离，最大者就是当前结点为根的树的最大结点距离
        return max(max(left_child_max_distance,right_child_max_distance),left_child_depth+right_child_depth);
        
    }
};

//代码长度较短，但稍微难理解一些
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        maxDepth(root, res);
        return res;
    }
    int maxDepth(TreeNode* node, int& res) {
        if (!node) return 0;
        int left = maxDepth(node->left, res);
        int right = maxDepth(node->right, res);
        res = max(res, left + right);
        return max(left, right) + 1;
    }
};
```

