/*
Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    vector<int>pre;
	void preorder(Node *root){
        if(root==NULL)return;
        pre.push_back(root->data);
        preorder(root->left);
        preorder(root->right);
        
    }
    int minDiff(Node *root, int K)
    {
        //Your code here
        preorder(root);
        int res=INT_MAX;
        for(auto it:pre){
            res=min(res,abs(K-it));
        }
        return res;
        
    }
};