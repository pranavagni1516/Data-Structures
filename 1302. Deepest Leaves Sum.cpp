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
    int deepestLeavesSum(TreeNode* root) {
        if(root->left == NULL and root->right == NULL)return root->val;

        queue<TreeNode*> q;

        int sum=0,lastsum=0;

        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* x=q.front();
            q.pop();

            if(x==NULL){
                if(q.empty()){
                    lastsum=sum;
                    break;
                }
                q.push(x);
                sum=0;
            }
            else{
                sum += x->val;
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }
        }


        return lastsum;
    }
};