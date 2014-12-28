#include<iostream>
#include "Graph_Node.cpp"
#include "DFS.cpp"
#include "adjacency_list.cpp"
using namespace std;


int main()
{
	struct Graph *H= NULL;
	int *Visited;

	H=adjMatrixofGraph();

	Visited = new int[H->V];

	DFSTraversal(H,Visited);
}