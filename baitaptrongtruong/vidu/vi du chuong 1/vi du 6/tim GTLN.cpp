#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,max;
    cout<<"nhap lan luot a,b,c,d"<<endl;
    cin >> a >> b >> c >> d;
    max = a;
    if (b>max)
    {
        max = b;
        b = a;
    }
    if (c>max)
    {
        max = c;
        c = b;
    }
    if (d > max)
    {
        max = d;
        d = c;
    }
    cout<< max << endl;
}
