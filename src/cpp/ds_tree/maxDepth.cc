#include "includes.hpp"

class Solution {
  public:
      int lheight = 0, rheight = 0;
      int maxDepth(TreeNode* root) {
          if(!root)   return 0;
          return std::max(maxDepth(root->left)+1, maxDepth(root->right)+1);
      }
};

