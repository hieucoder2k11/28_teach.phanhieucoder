#include<iostream>
#include<iomanip>
using namespace std;

float giaithua(int n) //Tính tổng S(n) = 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3....n
{
	float sum1 = 1;
	for (int i = 1; i <= n; i++)
	{
		sum1 *= i;
	}
	return sum1;
}

int main()
{
	int n;
	float sum = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		sum += 1 / giaithua(i);
	}
	cout <<fixed<<setprecision(2)<< sum;
	return 0;
}