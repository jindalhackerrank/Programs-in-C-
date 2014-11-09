/* Doubly Linked List Operation

Inserting a new node before the head 
Inserting a new node after the tail
Inserting a new node at the middle of the list 

*/

/* Node Structure */

struct DLLNode
{
	int data;
	struct DLLNode *next;
	struct DLLNode *prev;
};


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
		{
			*head->prev=newNode;
			*head=newNode;
			return;
		}

	
	}
}