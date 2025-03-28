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
//Approach:
// TC: O()  SC: O() 
