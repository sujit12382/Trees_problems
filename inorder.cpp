/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
  void fun(Node *root,vector<int>&v)
  {
     if(root==NULL)
     return;
     fun(root->left,v);
     
     v.push_back(root->data);
     fun(root->right,v);
  }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>ans;
        fun(root,ans);
        return ans;
    }
};
