#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    int d1,d2,d3,d4,d5,d6,min;//bien khoang cach
    cout << "nhap lan luot a,b,c,d"<<endl;
    cin >> a >> b >> c >> d;

    d1 = abs(a-b);
    d2 = abs(a-c);
    d3 = abs(a-d);
    d4 = abs(b-c);
    d5 = abs(b-d);
    d6 = abs(c-d);
    
    min = d1;
    if (min>d2) min = d2;
    if (min>d3) min = d3;
    if (min>d4) min = d4;
    if (min>d5) min = d5;
    if (min>d6) min = d6;

    cout <<"khoang cach nho nhat la = "<<min<<endl;

    
    
}