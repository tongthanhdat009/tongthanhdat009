#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a, hieu;
	cout <<"nhap so can kiem tra";
	cin >> a;
	int canint = sqrt(a);
	hieu = sqrt(a) - canint;
	if (hieu == 0)
	{cout << "la so chinh phuong"<<endl;}
	else if(hieu < 1)
	{cout << "khong la so chinh phuong"<<endl;}
	
}