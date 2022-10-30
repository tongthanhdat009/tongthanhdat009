#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a;
	c=0;
	while (a>0)
	{
	    b= a%10;
	    a = a/10;
	    c=c*10+b;
		}
		cout << c;
		return 0;
}