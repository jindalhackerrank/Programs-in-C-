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


int main()
{
	return 0;
}