#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b;
	cout << "nhap lan luot a,b: ";
	cin>>a>>b;
	cout<<"gia tri lon nhat= "<< max(a,b);
	cout<<"gia tri nho nhat= "<< min(a,b);

	return 0;
}
