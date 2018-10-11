#include "includes.hpp"

class Solution {
public:
    int lheight = 1, rheight = 1;
    int maxDepth(TreeNode* root) {
        if(!root)   return NULL;
        lheight = maxDepth(root -> left)  + 1;
        rheight = maxDepth(root -> right) + 1;
        return std::max(lheight-1,rheight-1);
    }
};