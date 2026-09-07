class Solution {
public:

    // Checks whether the linked list can be matched
    // starting from this tree node.
    bool check(ListNode* head, TreeNode* root) {
        if (head == nullptr)
            return true;

        if (root == nullptr)
            return false;

        if (head->val != root->val)
            return false;

        return check(head->next, root->left) ||
               check(head->next, root->right);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {

        if (root == nullptr)
            return false;

        // Try starting the linked list from this node
        if (check(head, root))
            return true;

        // Otherwise try every other tree node
        return isSubPath(head, root->left) ||
               isSubPath(head, root->right);
    }
};