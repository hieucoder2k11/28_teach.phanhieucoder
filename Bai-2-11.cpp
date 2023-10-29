#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 0;
	for (int i = 1; i <= n; i++)
	{
		t += i * i;
	}
	cout << "bai 2: " << t;
	cout << endl;

	int sum = 0;
	for (int i = 0; i <= n; i += 3)
	{
		sum += i;
	}
	cout << "Bai 3: " << sum << endl;

	float sum4 = 0;
	for (int i = 1; i <= n; i++)
	{
		sum4 += (float)1 / i;
	}
	cout << "Bai 4: " <<setprecision(2) << fixed << sum4 << endl;

	float sum5 = 0;
	for (int i = 1; i <= n; i++)
	{
		sum5 += (float)1 / (2 * i);
	}
	cout << "Bai 5: " << setprecision(5) << fixed << sum5 << endl;
	float sum6 = 0;
	int tong = 0;
	int dem = 0;
	cout << "Bai 6: ";
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)// loc ra cac uoc cua n tu 1-n
		{
			tong += i;// tong cac uoc
			dem++;
			cout << i << " ";
		}

	}
	cout <<endl<<"Tong cac uoc la: " << tong;
	cout << endl << "Co so uoc la: " << dem << "\n";
	cout << "So chinh phuong <n la: ";
	float sum7 = 0;
	for (int i = 1; i <= n; i++)
	{
		if (sqrt(i) - int(sqrt(i)) == 0) //tach phan su cua so can bac 2 neu =0 thi la so chinh phuong
		{
			cout << i << " \n";
		}
	}
	cout << "Bai 11: ";
	int sum11 = 0;
	int temp = 1;

	for (int i = 0; i <= n; i++) //Tính tổng : S= -1 + 2 - 3 + 4 - 5 + ...... + (-1)^n*n
	{
		sum11 += i * temp;
		temp *= -1;
	}
	cout << sum11;
	cout << endl;
	cout << "Bai7: ";
	const int ok = 1000;
	int N;
	int x[ok]{};
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> x[i];

	}
	for (int i = 1; i <= N; i++)
	{
		if (x[i] == 2022)
		{
			cout << "YES"; break;
		}
		else
		{
			cout << "Khong ton tai so 2022."; break;
		}
	}
	cout << "\n";
	cout << "Nhap so de tinh cac so trong 1 chu so: ";
	int a, sostemp;
	int sumx = 0;
	cin >> a;
	sostemp = a;
	while (sostemp != 0)//tong cac chu so cua 1 so bai 17
	{
		sumx += sostemp % 10;
		sostemp /= 10;
	}
	cout <<"tong cac chu so cua " << a << " la: " << sumx;

	return 0;
}