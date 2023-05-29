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
    void preorder(TreeNode*root,vector<int>&leafNode){
        if(root==NULL)return;

        if(root && root->left==NULL && root->right==NULL)leafNode.push_back(root->val);
        preorder(root->left,leafNode);
        preorder(root->right,leafNode);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafNode1,leafNode2;
        preorder(root1,leafNode1);
        preorder(root2,leafNode2);
        
        if(leafNode1==leafNode2)return true;
        return false;
    }
};