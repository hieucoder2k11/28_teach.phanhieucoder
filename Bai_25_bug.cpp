#include<iostream>
using namespace std;

double giaithua(int n)
{
	long sum = 1;
	double sum1 = 0;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
		sum1 = (double)1 / sum;
	}
	return sum1;
}

int main()
{
	int n;

	cin >> n;
	/*for (int i = 0; i < n; i++)
	{
		sum1 += float(1) / giaithua(i);
	}
	cout << sum1;*/
	cout << giaithua(n);
	return 0;
}