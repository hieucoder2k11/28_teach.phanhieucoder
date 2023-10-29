#include<iostream>
using namespace std;

int main()
{
	int st,sc,sc1=0; // so tien, so chai
	cin >> st;
	sc = st / 28; // tinh so chai (1 chai 28 vnd)
	while (sc >= 3)
	{
		sc1 = sc + 1;
		break;
	}
	
	cout << "So cha co the mua voi " << st << " vnd la: " << sc1;
	return 0;
}