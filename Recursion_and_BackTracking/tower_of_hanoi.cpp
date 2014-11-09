
/*Tower of Hanoi Problem*/


#include<iostream>
using namespace std;


void Tower_of_hanoi(int n,char frompeg,char topeg,char auxpeg )
{
	//If only 1 disk make the move and return 
	if(n==1)
	{
		cout<<"Move disk 1 from "<< frompeg<<" to "<<topeg<<endl;
		return ;
	}

	//Move top n-1 disk from A to B using C as auxillary
	Tower_of_hanoi(n-1,frompeg,auxpeg,topeg);

	//Move reamaining disk from A to C
	cout<<"Move disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;

	//Move n-1 disk from B to C using A as auxillary 
	Tower_of_hanoi(n-1,auxpeg,topeg,frompeg);	



}

int main()
{
	int n=3;
	char frompeg,topeg,auxpeg;
	frompeg='A';
	topeg='B';
	auxpeg='C';
	Tower_of_hanoi(n,frompeg,topeg,auxpeg);

	return 0;

}