/* Check Whether a Linked List Conatins a Loop

It can be Hashing Method as well as this concept. This method is most efficient , It tells us in one scan O(n) time

*/


#include<iostream>
using namespace std;


struct ListNode{
	int data;
	struct ListNode *next;
};



int DoesLinkedLinkedContainsLoop(struct ListNode *head)
{
	struct ListNode *slowPtr=head,*fastPtr=head;

	while(slowPtr && fastPtr && fastPtr->next)
	{
		slowPtr=slowPtr->next;
		fastPtr=fastPtr->next->next;

		if(slowPtr==fastPtr)
			return 1;
	}

	return 0;
}


int main()
{
	return 0;
}