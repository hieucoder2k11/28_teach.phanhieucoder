#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	//Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.bai18
	long long n;
	int dem = 0;
	cin >> n;
	while (n != 0)
	{
		int res = n % 10;
		if (res == 2 || res == 3 || res == 5 || res == 7)
		{
			dem++;
		}
		n /= 10;
	}
	cout <<dem;

}