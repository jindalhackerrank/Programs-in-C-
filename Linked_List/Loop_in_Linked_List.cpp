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


struct ListNode* FindBeginOfLoop(struct ListNode *head)
{
	struct ListNode *slowPtr=head,*fastPtr=head;
	int loopExist=0;

	while(slowPtr && fastPtr && fastPtr->next)
	{
		slowPtr=slowPtr->next;
		fastPtr=fastPtr->next->next;

		if(slowPtr==fastPtr)
		{
			loopExist=1;
			break;
		}

	}

	if (loopExist)
	{
		slowPtr=head;
		while(slowPtr!=fastPtr)
		{
			slowPtr=slowPtr->next;
			fastPtr=fastPtr->next;
		}

		return slowPtr;
	}
	else
		return NULL;

}


int main()
{
	return 0;
}