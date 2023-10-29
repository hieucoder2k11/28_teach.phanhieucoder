#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <= n; i+=3)
	{
		cout << i << " ";
	}
	cout << "\n";
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << i << " ";
		}
	}
	cout << "\n";
	for (int i = n; ; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << " ";
			break;
		}
	}	
	cout << "\n";
	for (int i = n; i >= 0; i--)
	{
		if (i % 9 == 0)
		{
			cout << i << " ";
			break;
		}
	}
	cout << "\n";
	for (int i = 1; i <= n; i += 2)
	{
		cout << i << " ";
	}
	return 0;
}