/* Program to reverse linked list by recursion as well as by loop */


#include<iostream>
using namespace std;

/* Linked List Structure */

struct ListNode{
	int data;
	struct ListNode *next;
};



//Iterative version

struct ListNode* RevereseLL(struct ListNode *head)
{
	struct ListNode *nextNode=head,*tmp=NULL;

	while(head)
	{
		nextNode=(head)->next;
		(head)->next=tmp;
		tmp=(head);
		(head)=nextNode;

	

	}
	return tmp;
}


//Recursive version

void recursiveReverse(struct ListNode** head_ref)
{
    struct ListNode* first;
    struct ListNode* rest;
      
    /* empty list */
    if (*head_ref == NULL)
       return;  
 
    /* suppose first = {1, 2, 3}, rest = {2, 3} */
    first = *head_ref; 
    rest  = first->next;
 
    /* List has only one node */
    if (rest == NULL)
       return;  
 
    /* reverse the rest list and put the first element at the end */
    recursiveReverse(&rest);
    first->next->next  = first; 
     
    /* tricky step -- see the diagram */
    first->next  = NULL;         
 
    /* fix the head pointer */
    *head_ref = rest;             
}


int main()
{
	return 0;
}