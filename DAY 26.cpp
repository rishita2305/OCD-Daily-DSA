//Question 1) Search in Linked List
//Approach: Iterate through the linked list, checking if any node's data matches the key
// TC: O(n)  SC: O(1) 
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */
class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
    Node* current = head;
    while(current != nullptr){
        if(current->data==key){
            return true;
        }
        current = current->next;
    }
     return false;
    }
};

//Question 1) Doubly linked list Insertion at given position
//Approach: traverse through the array to find the position where element is to be inserted.
// TC: O(n)  SC: O(1) 
class Solution {
  public:
    Node *addNode(Node *head, int pos, int data) {
        if (head == NULL) return head;
        
        Node* newNode = new Node(data);
        Node* temp = head;
        
        // Traverse to the position where the new node should be inserted
        for (int i = 0; i < pos && temp->next != NULL; i++) {
            temp = temp->next;
        }
        
        // Insert the new node after temp
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        
        // If the new node is not the last node, update the next node's previous pointer
        if (newNode->next != NULL) {
            newNode->next->prev = newNode;
        }
        
        return head;
    }
};
