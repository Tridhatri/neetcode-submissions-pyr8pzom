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
    int FindMin(TreeNode* root){
        while(root->left){
            root = root->left;
        }
        return root->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
       if(!root){
        return nullptr;
       }
       if(key > root->val){
        root->right = deleteNode(root->right, key);
       }
       else if(key < root->val){
        root->left = deleteNode(root->left, key);
       }
       else{
            // 3 Cases
            // Case -1 : Leaf Node
            if(root->left == nullptr && root->right == nullptr){
                delete root;
                root = NULL;
            }
            // Case -2 : one child
            else if(root->left == nullptr){
                TreeNode* temp = root;
                root = root->right; 
                delete temp;
            }
            else if(root->right == nullptr){
                TreeNode* temp = root;
                root = root->left;
                delete temp;
            } 
            // Case -3 : two childs, 
            // 1. findmin of the right subtree 
            // 2. Set the root value to the min of the right subtree 
            // 3. delete the min value
            // That's all
            else {
                int min = FindMin(root->right);
                root->val = min;
                root->right = deleteNode(root->right, min);
            }
       }

       return root;

    }
};