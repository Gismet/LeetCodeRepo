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
/*
    #intuition: According to the problem, For two trees to be considered same , They must be structurally identical and the nodes must have the same values.
     Let's imagine that trees are the same. Then this suggests that we can traverse them the same way. 
     Traversing them the same way will ensure that trees are the same structurally.
     But bear in mind that the nodes in both trees must be same. So we have to check if the nodes have the same values too.
     I have also checked if both trees are NULL. In that case thay are structurally identical and no need to check if the nodes have the same values. We can return true.
     In any other case we can return false

*/


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
        return 1;

        if (p != NULL && q != NULL)
        {
            return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }

        return 0;
    }
};
