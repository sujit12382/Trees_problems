//User function template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int fun(Node *root)
    {
        if(root==NULL)
        return 0;
        int left=fun(root->left);
        int right=fun(root->right);
        return max(left,right)+1;
    }
    int height(struct Node* node){
        // code here 
        int ans=fun(node);
        return ans;
    }
};
