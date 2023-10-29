#include<iostream>
using namespace std;

int main()
{
	int n=5;
	// VE CAC BIEN THE CUA HINH VUONG
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	/*for (int i =1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n ||j==1 ||j==n)
			{
				cout <<i<< " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}*/

	return 0;
}