#include<iostream>
using namespace std;

int main()
{
	int n = 6;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1)
			{
				cout << char(64 + j);
			}
			if (i == 2)
			{
				cout << char(97 + j);
			}
			if (i == 3)
			{
				cout << char(66 + j);
			}
			if (i == 4)
			{
				cout << char(99 + j);
			}
			if (i == 5)
			{
				cout << char(68 + j);
			}
			if (i == 6)
			{
				cout << char(101 + j);
			}
		}
		cout << "\n";
	}
	return 0;
}
				//ABCDEF
				//bcdefg
				//CDEFGH
				//defghi
				//EFGHIJ
				//fghijk