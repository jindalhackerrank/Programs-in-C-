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


/* 

Singly Linked List Deletion

Deleting the first node 
Deleting the last node
Deleting an intermediate node


*/


void DeleteNodeFromLinkedList(struct ListNode **head,int position)
{
	int k=1;
	struct ListNode *p,*q;

	if(*head==NULL)
	{
		cout<<"List Empty"<<endl;
		return;
	}

	p=(*head)	;

	/* from the beginning */

	if(position==1)
	{
		*head=(*head)->next;
		delete(p);
		return;
	}
	else
	{
		//Traverse the list until the position from which we want to delete 
		while(p!=NULL && k<position)
		{
			k++;
			q=p;
			p=p->next;
		}

		if(p==NULL)  /*At the end */
			cout<<"Position does not exist"<<endl;
		else
		{
			q->next=p->next;
			delete(q);
		}
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

	DeleteNodeFromLinkedList(&head,1);

	len=ListLength(head);

	cout<<"Length after deletion of 1 node is "<<len<<endl;


}
















