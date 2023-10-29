#include<iostream>
using namespace std;

int main()
{
	// CAC BIEN THE CUA HINH TAM GIAC
	int n = 5;
	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << "\n\n";				
	for (int i = 1; i <=n; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << "\n\n";
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= n - i)
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
	}
	cout << "\n\n";
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= i-1)
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
	}
	cout << "\n\n";
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i || i==n)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}