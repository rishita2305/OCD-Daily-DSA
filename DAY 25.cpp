//Question 1) 237. Delete Node in a Linked List
//Approach:  We store the value of next node in the node to be delted and then the delete temp; statement deletes the original node that was next to node before modifying it.
// TC: O(1)  SC: O(1) 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // Copy the value of the next node to the current node
        node->val = node->next->val;
        // Store the next node in a temporary pointer
        ListNode* temp = node->next;
        // Skip the next node by updating the pointer
        node->next = node->next->next;
        // Free memory of the skipped node
        delete temp;
    }
};

//Question 2) Linked List Insertion At End
//Approach: Check if the linked list is empty (head == NULL). If empty, return the new node as the new head.Traverse the linked list to reach the last node. Attach the new node at the end by updating the last node’s next pointer.
// TC: O(n)  SC: O(1) 
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Create a new node
        Node *newNode = new Node(x);
        
        // If the linked list is empty, return the new node as head
        if (head == NULL) return newNode;
        
        // Traverse to the last node
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        
        // Insert the new node at the end
        temp->next = newNode;
        
        return head;
    }
};
