#include<iostream>
using namespace std;

int main()
{
	const int max1 = 1000; //tính t?ng các s? nguyên ???c nh?p là s? ch?n.
	int n, arr[max1],sum=0;
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
			sum += arr[i];
		}
	}
	cout <<"Tong cac so chan duoc nhap vao: " << sum;
	return 0;
}