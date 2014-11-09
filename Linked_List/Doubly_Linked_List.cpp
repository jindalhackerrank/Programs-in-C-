/* Doubly Linked List Operation

Inserting a new node before the head 
Inserting a new node after the tail
Inserting a new node at the middle of the list 

*/

#include<iostream>
using namespace std;


/* Node Structure */

struct DLLNode
{
	int data;
	struct DLLNode *next;
	struct DLLNode *prev;
};



/* Length Function */

int DLLLength(struct DLLNode *head)
{
	int len=0;
	while(head!=NULL)
	{
		len++;
		head=head->next;
	}
	
	return len;
}


/* Inserting a Node */

void DLLInsert(struct DLLNode **head,int data,int position)
{
	int k=1;
	struct DLLNode *temp,*newNode;

	newNode=new DLLNode();

	if(!newNode)
	{
		cout<<"Memory Error"<<endl;
		return;
	}

	newNode->data=data;

	if(position==1)
	{
		newNode->next=(*head);
		newNode->prev=NULL;

		if (*head)
			(*head)->prev=newNode;

			*head=newNode;
			return;
	}

	temp=(*head);
	while((k<position-1) && temp->next!=NULL )
	{
		temp=temp->next;
		k++;
	}

	if(k!=position)
		cout<<"Desired position does not exist"<<endl;

	newNode->next=temp->next;
	newNode->prev=temp;

	if(temp->next)
		temp->next->prev=newNode;

	temp->next=newNode;
	return;

}



void DLLDelete(struct DLLNode **head,int position)
{
	int k=1;
	struct DLLNode *temp,*temp2;

	temp=(*head);

	if((*head)==NULL)
	{
		cout<<"List is Empty"<<endl;
		return;
	}

	if (position==1)
	{
		*head=(*head)->next;
	

		if(*head!=NULL)
			(*head)->prev=NULL;

		delete(temp);
		return;
	}

	while((k<position) && temp->next!=NULL )
	{
		temp=temp->next;
		k++;
	}

	if(k!=position-1)
		cout<<"Desired position does not exist"<<endl;

	temp2=temp->prev;
	temp2->next=temp->next;

	if(temp->next)
		temp->next->prev=temp2;

	delete(temp);

	return;
}




/*main Function */


int main()
{
	int len=0;
	struct DLLNode *head=NULL;

	DLLInsert(&head,100,1)	;
	DLLInsert(&head,200,1)	;
	len=DLLLength(head);
	cout<<"Length Before"<<len<<endl;
	DLLDelete(&head,1)	;
	len=DLLLength(head);
	cout<<"Length After"<<len<<endl;

}





