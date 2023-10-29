#include<iostream>
using namespace std;

int main()
{
	//Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.
	int n, dem=0;
	int sum1 = 0;{};
	cin >> n;
	/*if (n == 0)
	{
		cout << 1; return 0;
	}*/
	/*while (n != 0)
	{
		dem++;
		n /= 10;
	}
	cout << dem;*/
	//Nhập vào n, tính tổng các chữ số của n, và in ra kết quả
	int temp;
	temp = n;
	while (temp != 0)
	{
		sum1+=temp % 10;
		temp /= 10;
	}
	cout << sum1;
	return 0;
}