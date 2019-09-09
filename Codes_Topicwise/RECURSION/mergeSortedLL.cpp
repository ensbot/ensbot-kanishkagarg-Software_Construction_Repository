#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;
};

/* pull off the front node of  
the source and put it in dest */
void MoveNode(Node** destRef, Node** sourceRef);








Node* SortedMerge(Node* a, Node* b)
{	
	Node* result;
	if(a == NULL)
		return(b);
	else if(b == NULL)
		return(a);
	if(a->data <= b->data)
	{
		result = a;
		result->next = SortedMerge(a->next,b);
	}
	else
	{
		result = b;
		result->next = SortedMerge(a,b->next);
	}
	return (result);
}  







void MoveNode(Node** destRef, Node** sourceRef)  
{  
    /* the front source node */
    Node* newNode = *sourceRef;  
    assert(newNode != NULL);  
  
    /* Advance the source pointer */
    *sourceRef = newNode->next;  
  
    /* Link the old dest off the new node */
    newNode->next = *destRef;  
  
    /* Move dest to point to the new node */
    *destRef = newNode;  
}  
  
  
/* Function to insert a node at   
the beginging of the linked list */
void push(Node** head_ref, int new_data)  
{  
    /* allocate node */
    Node* new_node = new Node(); 
  
    /* put in the data */
    new_node->data = new_data;  
  
    /* link the old list off the new node */
    new_node->next = (*head_ref);  
  
    /* move the head to point to the new node */
    (*head_ref) = new_node;  
}  
  
/* Function to print nodes in a given linked list */
void printList(Node *node)  
{  
    while (node!=NULL)  
    {  
        cout<<node->data<<" ";  
        node = node->next;  
    }  
}  
  
/* Driver code*/
int main()  
{  
    /* Start with the empty list */
    Node* res = NULL;  
    Node* a = NULL;  
    Node* b = NULL;  
  
    /* Let us create two sorted linked lists   
    to test the functions  
    Created lists, a: 5->10->15, b: 2->3->20 */
    push(&a, 15);  
    push(&a, 10);  
    push(&a, 5);  
  
    push(&b, 20);  
    push(&b, 3);  
    push(&b, 2);  
  
    /* Remove duplicates from linked list */
    res = SortedMerge(a, b);  
  
    cout << "Merged Linked List is: \n";  
    printList(res);  
  
    return 0;  
}  
  