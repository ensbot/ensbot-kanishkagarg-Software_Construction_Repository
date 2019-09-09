#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;
};

void swap(Node* head, Node* tail)
{
	int temp = 0;
	temp = head->data;
	head->data = tail->data;
	tail->data = temp;
}

void pairWiseSwap(Node* head)
{
	if (head != NULL && head->next != NULL) { 
  
        /* Swap the node's data with data of next node */
        swap(head, head->next); 
  
        /* Call pairWiseSwap() for rest of the list */
        pairWiseSwap(head->next->next); 
    } 
}



/* Function to add a node at the  
   beginning of Linked List */
void push(Node** head_ref, int new_data) 
{ 
    /* allocate node */
    Node* new_node = new Node(); 
  
    /* put in the data */
    new_node->data = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point  
       to the new node */
    (*head_ref) = new_node; 
} 
  
/* Function to print nodes 
   in a given linked list */
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data << " "; 
        node = node->next; 
    } 
} 
  
// Driver Code 
int main() 
{ 
    Node* start = NULL; 
  
    /* The constructed linked list is:  
    1->2->3->4->5 */
    push(&start, 5); 
    push(&start, 4); 
    push(&start, 3); 
    push(&start, 2); 
    push(&start, 1); 
  
    cout << "Linked list "
         << "before calling pairWiseSwap()\n"; 
    printList(start); 
  
    pairWiseSwap(start); 
  
    cout << "\nLinked list "
         << "after calling pairWiseSwap()\n"; 
    printList(start); 
  
    return 0; 
} 