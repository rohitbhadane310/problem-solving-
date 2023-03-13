// 101. Symmetric Tree

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     bool isEqual (TreeNode *rootLeft , TreeNode *rootRight)
//     {
//         if(rootLeft == NULL && rootRight == NULL)
//         {
//             return true;
//         }

//         if(rootLeft == NULL || rootRight == NULL)
//         {
//             return false;
//         }

//         if(rootLeft->val == rootRight->val)
//         {
//             return isEqual(rootLeft->left , rootRight->right) && isEqual(rootLeft->right , rootRight->left);
//         }

//         return false;
//     }

//     bool isSymmetric(TreeNode* root) {
        
//         return isEqual(root->left , root->right);
//     }
// };