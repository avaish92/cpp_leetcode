#include "includes.hpp"

class Solution {
    int sum = 0;
public:
    bool isLeaf(TreeNode *root){
        if(!root)   return false;
        if(!root->left && !root->right) return true;
        else return false;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)   return 0;
        if(isLeaf(root->left))  sum += root->left->val;
        else sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sum;
    }
};
