#include "includes.hpp"

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)   return true;
        TreeNode *tmpLeft = root->left, *tmpRight = root->right;
        deque<TreeNode *> qleft, qright;

        if(tmpLeft) qleft.push_back(tmpLeft);
        if(tmpRight)    qright.push_back(tmpRight);

        while(true){
            int sizeLeft = qleft.size(), sizeRight = qright.size();
            if (sizeLeft != sizeRight)   return false;

            /*sizeLeft = qleft.size();
            sizeRight = qright.size();*/

            if(qright.empty() && qleft.empty()) return true;

            while(sizeLeft--){
                if(tmpLeft->left && tmpRight->right){
                    qleft.push_back(tmpLeft->left);
                    qright.push_back(tmpRight -> right);
                }
                if(tmpLeft->left || tmpRight->right)    return false;

                if(tmpLeft->right && tmpRight->left){
                    qleft.push_back(tmpLeft->right);
                    qright.push_back(tmpRight->left);
                }
                if(tmpLeft->right || tmpRight->left)    return false;
                
                //if(tmpRight->right) qright.push_back(tmpRight->right);
                //if(tmpRight->left)

                if(qleft.front()->val != qright.front()->val)   return false;

                tmpLeft = qleft.front();
                tmpRight = qright.front();
                qleft.pop_front();
                qright.pop_front();

            }
        }
    }
};