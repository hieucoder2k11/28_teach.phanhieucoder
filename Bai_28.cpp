#include<iostream>
using namespace std;

int giaithua(int n) //Tính t?ng S(n) = 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3....n
{
	int sum1=1;
	for (int i = 1; i <= n; i++)
	{
		sum1 *= i;
	}
	return sum1;
}

int main()
{
	int n,sum=0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += giaithua(i);
	}
	cout << sum;
	return 0;
}