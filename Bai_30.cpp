#include<iostream>
using namespace std;

int main()
{
	const int max1 = 1000; //t�nh t?ng c�c s? nguy�n ???c nh?p l� s? ch?n.
	int n, arr[max1], sum = 0;
	cout << "Nhap n phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << "EVEN\n";
		}
		else
		{
			cout << "ODD\n";
		}
	}

	return 0;
}