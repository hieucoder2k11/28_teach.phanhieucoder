#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,sum1=0,temp;
	cout << "NHap N: ";
	cin >> n;
	temp = n;
	while (temp != 0)
	{
		sum += temp % 10;
		temp /= 10;
	}
	cout << sum << "\n";
	while (sum != 0)
	{
		sum1 += sum % 10;
		sum /= 10;
	}
	cout << sum1;
	return 0;
}