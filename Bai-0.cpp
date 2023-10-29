#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = n; i >= 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	for (int i = 0; i <= n; i += 4)
	{
		cout << i << " ";
	}
	cout << endl;
	char a = 'a';
	for (int i = 0; i <= n; i++)
	{
		cout << char(a+ i) << " ";
	}
	cout << endl;
	char b = 'z';
	for (int i = 0; i <= n; i++)
	{
		cout<< char(b - i)<<" ";
		
	}
	
	
	return 0;
}
