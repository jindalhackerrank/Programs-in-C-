#include<iostream>
using namespace std;


struct Graph *adjMatrixofGraph()
{
	int i,u,v;
	struct Graph *G= new Graph();
	if(!G)
	{
		cout<<"Memory Error"<<endl;
		return G;
	}

	cout<<"Enter no of Vertex and Edge in the Graph"<<endl;
	cin>>G->V>>G->E;

	G->Adj=new int *[G->V];
	for (int j = 0; j < G->V; ++j)
	{
		G->Adj[j] = new int[G->V];
	}

	//Initialize all the edges to 0
	for(u=0;u<G->V;u++)
		for(v=0;v<G->V;v++)
			G->Adj[u][v]=0;

	for(i=0;i<G->E;i++)
	{
		cout<<"Reading Edge"<<endl;
		cin>>u>>v;

		G->Adj[u][v]=1;
		G->Adj[v][u]=1;
	}


	return G;

}








