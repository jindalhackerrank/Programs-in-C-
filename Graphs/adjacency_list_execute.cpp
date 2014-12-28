#include<iostream>
#include "Graph_Node.cpp"
#include "adjacency_list.cpp"
using namespace std;


int main()
{
	struct Graph *H= NULL;

	H=adjMatrixofGraph();

	cout<<"Vertex "<<H->V<<"Edges "<<H->E<<endl;

	for(int i=0;i<H->V;i++)
	{
		cout<<i<<"   ";
		for(int j=0;j<H->V;j++)
			cout<<H->Adj[i][j]<<" ";
		cout<<endl; 
	}
	return 1;
}
