/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, TreeNode* &prev, bool &res){
        if(!root || !res)
            return;
        inorder(root->left, prev, res);
        if(prev && root->val <= prev->val){
            res=false;
            return;
        }
        prev=root;
        inorder(root->right, prev, res);
    }
    
    bool isValidBST(TreeNode* root) {
        bool res = true;
        TreeNode* prev=NULL;
        inorder(root, prev, res);
        return res;
    }
};