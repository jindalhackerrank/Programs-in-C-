/* Our aim is to find the nth node from the end of the linked list */

/* One Efficient method of doing it in one scan is as follows.

Take two pointers pNthNode and PTemp . PNth pointer only starts moving after PTemp has moved n nodes from head. So when PTemp reaches the end
PthNode has moved nth node from the end.

For example. 

Length of LL - m 
PTemp moved n nodes.
Nodes left to be covered - m-n;

distance covered by PNthNode  from end is (m-n)

Distance from end n-(m-n)=n

*/

#include<iostream>
using namespace std;


struct ListNode{
	int data;
	struct ListNode *next;
};



struct ListNode* NthNodeFromEnd(struct ListNode *head,int NthNode)
{
	struct ListNode *PNthNode=head;
	struct ListNode *PTemp=head;

	int temp=NthNode;

	while((temp--) && PTemp!=NULL)
	{
		PTemp=PTemp->next;
	}

	if(PTemp==NULL)
		return NULL;

	while(PTemp)
	{
		PTemp=PTemp->next;
		PNthNode=PNthNode->next;	
	}

	return PNthNode;
}


int main()
{
	return 0;
}