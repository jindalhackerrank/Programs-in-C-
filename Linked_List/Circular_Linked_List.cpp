/* Circular Linked List 

Operations on Circular Linked List 

Insertion at the begining and at the end and at the middle
Deletion from the beginning and at the end and at the middle

*/


#include<iostream>
using namespace std;

/* Node Structure */

struct CLLNode
{
	int data;
	struct CLLNode *next;
};


/* i) Counting no of nodes in the linked list */

int CLLLength(struct CLLNode *head)
{
	struct CLLNode *current=head;
	int count=0;

	if(head==NULL)
		return 0;

	while(current!=head)
	{
		count++;
		current=current->next;
	}

	return count;
}


/* Printing the contents of a circular Linked List */

void PrintCLL(struct CLLNode *head)
{
	struct CLLNode *current=head;

	if(head==NULL)
		return;

	while(current!=head)
	{
		cout<<current->data<<"->";
		current=current->next;
	}
}


/* Insert at End of the Circular Linked list */

void InsertAtEndCLL(struct CLLNode **head,int data)
{
	struct CLLNode *current=(*head);
	struct CLLNode *newNode= new CLLNode();

	if(!newNode)
	{
		cout<<"Memory Error"<<endl;
		return;
	}

	newNode->data=data;

	while(current->next!=(*head))
	{
		current=current->next;
	}

	newNode->next=newNode;

	if(*head=NULL)
		*head=newNode;
	else
		{
			newNode->next=*head;
			current->next=newNode;
		}
	return;
}


/* Insert a node at front of a Circular Linked list */


void InsertAtBeginCLL(struct CLLNode **head,int data)
{
	struct CLLNode *current=(*head);
	struct CLLNode *newNode= new CLLNode();

	if(!newNode)
	{
		cout<<"Memory Error"<<endl;
		return;
	}

	newNode->data=data;

	while(current->next!=*head)
	{
		current=current->next;
	}

	newNode->next=newNode;

	if(*head=NULL)
		*head=newNode;
	else
		{
			newNode->next=*head;
			current->next=newNode;
			*head=newNode;
		}

	return;
}


/*Deleting last node of Circular Linked List */

void DeleteLastNodeCLL(struct CLLNode **head)
{

	struct CLLNode *current=*head,*temp=*head;

	if(*head==NULL)
		{
			cout<<"List Empty"<<endl;
			return;
		}

	while(current->next!=*head)
	{
		temp=current;
		current=current->next;
	}

	temp->next=current->next;
	delete(current);
	return;
}



/*Delete first Node of Circular Linked List */

void DeleteFirstNodeCLL(struct CLLNode **head)
{

	struct CLLNode *current=*head,*temp=*head;

	if(*head==NULL)
		{
			cout<<"List Empty"<<endl;
			return;
		}

	while(current->next!=*head)
	{
		current=current->next;
	}

	current->next=(*head)->next;
	*head=(*head)->next;
	delete(temp);
	return;
}


int main()
{
	return 0;
}