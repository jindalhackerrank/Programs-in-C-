/* Basic operations of a Linked List 

Traversing the list 
Inserting an item in the list 
Deleting an item from the list 

*/


#include<iostream>
using namespace std;

/* Linked List Structure */

struct ListNode{
	int data;
	struct ListNode *next;
};


/* i) Traversing the Linked List 

ListLength() function takes a linked list an input and counts the number of nodes in the list 

*/


int ListLength(struct ListNode *head)
{
	struct ListNode *current=head;
	int count =0;

	while(current)
	{
		count++;
		current=current->next;
	}

	return count;

}


/* ii) Singly Linked list Insertion 

Inserting a new node before the head
Inserting a new node after the tail
Inserting a new node at the middle of the list (random location)

*/


void InsertInLinkedList(struct ListNode **head,int data,int position)
{
	int k=1;
	struct ListNode *p,*q,*newNode;
	p=*head;

	newNode=new ListNode();
	if(!newNode)
	{
		cout<<"Memory Error"<<endl;
		return;
	}
	newNode->data=data;

	//Insert at the begining 

	if(position==1)
	{
		newNode->next=p;
		*head=newNode;
	}
	else
	{
		while((p!=NULL) && (k<position) )
		{
			k++;
			q=p;
			p=p->next;
		}

		q->next=newNode;
		newNode->next=p;
	}
}





/* Main function */

int main()
{
	struct ListNode *head = NULL;

	InsertInLinkedList(&head,200,1);
	InsertInLinkedList(&head,300,1);
	InsertInLinkedList(&head,400,1);

	int len=ListLength(head);

	cout<<"Length is "<<len<<endl;

}
















