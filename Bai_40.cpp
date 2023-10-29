#include<iostream>
using namespace std;

int main()
{
	//BANG CUU CHUONG
	int n=5;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " x " << j << " = " << i * j;
			cout << endl;
		}
		cout << "\n";
	}
	return 0;
}