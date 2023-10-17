#include<iostream>
using namespace std;
void changeValue (int*p)
{
}
int main()
{
	int arry[5] = {31, 43, 77,69};
	int * ptr = arry;
	cout<< *(2+ptr) <<endl;
	return 0;
}
