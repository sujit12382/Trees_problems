// User function Template for C++

// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution {
  public:
    void fun(Node* root,int &min)
    {
        if(root==NULL)
        return;
        if(root->data < min)
        {
            min=root->data;
        }
        fun(root->left,min);
        fun(root->right,min);
    }
    int minValue(Node* root) {
        // Code here
        int min=INT_MAX;
        fun(root,min);
        return min;
    }
};
