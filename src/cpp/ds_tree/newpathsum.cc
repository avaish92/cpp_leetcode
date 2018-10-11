#include "includes.hpp"

class Solution {
    bool result;
public:
    Solution(): result(false) {}
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)   return NULL;
        if(!root->left && !root->right && sum-root->val == 0) result |= true;
        hasPathSum(root->left, sum-root->val);
        hasPathSum(root->right, sum-root->val);
        return result;
    }
};