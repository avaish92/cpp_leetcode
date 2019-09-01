#include "includes.hpp"

class Solution {
    int sum = 0;
public:
    bool isLeaf(TreeNode *root){
        return root && !root->left && !root->right;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)   return 0;
        if(isLeaf(root->left))  sum += root->left->val;
        else sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sum;
    }
};
