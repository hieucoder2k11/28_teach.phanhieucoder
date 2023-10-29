#include<iostream>
using namespace std;

int main()
{
	//cac bien the cua hinh vuong
	int n = 5;
	for (int i = 1; i <= n; i++)

	{
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				cout << i++ << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << "\n\n";
	for (int i = 1; i <= n; i++)
	{
		int ktao = i;
		for (int j = 1; j <= n; j++)
		{
			cout << ktao << " "; ktao++;
		}
		cout << "\n";
	}
	cout << "\n";
	for (int i = 1; i <= n; i++)

	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= n - i)
			{
				cout << "- ";
			}
			else
			{
				cout <<i<< " ";
			}
		}
		cout << endl;
	}
	cout << "\n\n";

	for (int i = 1; i <= n; i++)
	{
		int ktao = i;
		int dem = n - 1;
		for (int j = 1; j <= i; j++)
		{
			cout << ktao << " ";
			ktao += dem;
			--dem;
		}
		cout << endl;
	}

	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		int ktao = 96 + i;
		for (int j = 1; j <= n; j++)
		{
			cout << char(ktao) << " "; ktao++;
		}
		cout << endl;
	}
	return 0;
}