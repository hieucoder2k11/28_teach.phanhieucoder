#include<iostream>
using namespace std;

int main()
{
	int n = 6;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << char(64+i)<<" ";
		}
		cout << endl;
	}
	  /*A
		B B
		C C C
		D D D D
		E E E E E
		F F F F F F*/
	return 0;
}