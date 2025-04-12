//Q82. Remove Duplicates from Sorted List II
// TC: O(n) SC: O(1)
//Approach: Use a dummy node and two pointers to skip all consecutive duplicates by comparing adjacent node values and linking only distinct nodes.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Dummy node before head to handle edge cases
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;   // last node before duplicate sequence
        ListNode* curr = head;    // current node we're checking

        while (curr != NULL) {
            // Check if it's the start of duplicates
            if (curr->next != NULL && curr->val == curr->next->val) {
                int duplicateVal = curr->val;
                // Skip all nodes with that duplicate value
                while (curr != NULL && curr->val == duplicateVal) {
                    curr = curr->next;
                }
                prev->next = curr;  // Connect to the next non-duplicate
            } else {
                // No duplicate, move both pointers ahead
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};
