#include "includes.hpp"

class Solution {
public:
/*Tested and*/
    TreeNode* invertTree(TreeNode* root) {
        if(!root)   return root;
        invertTree(root->left);
        invertTree(root->right);
        std::swap(root->left,root->right);
        return root;
    }

/*
  Untested solution, to be modified, with a bug fix
*/
    TreeNode *invertTree(TreeNode *root, TreeNode *left, TreeNode *right){
        if(!left || !right) return NULL;
        
        std::swap(left->right, right->left);
        std::swap(left->left, right->right);
        invertTree(root,left->left,right->right);

        return root;
    }
};