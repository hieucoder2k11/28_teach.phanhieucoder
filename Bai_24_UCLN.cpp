#include<iostream>
using namespace std;

int main()
{
	int a, b,sum=0;
	cin >> a;
	cin >> b;
	
	cout << "UCLN cua 2 so la: ";
	for (int i = min(a,b); i >0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << i << " "; break;
		}
	}
	return 0;
}