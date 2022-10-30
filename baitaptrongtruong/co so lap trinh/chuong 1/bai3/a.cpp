#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   int a,b,c;
    int temp;
    cout<<"nhap lan luot a,b,c"<<endl;
    cin >> a>>b>>c;
    if (a>b)
    {
        temp = a;
        a=b;
        b= temp;
    }
    if (a>c)
        {
            temp = a;
            a=c;
            c=temp;
        }
    if (b>c)
        {
            temp =b;
            b = c;
            c = temp;
        }
    cout <<"thu tu tang dan cua 3 so "<<a<<" "<<b<<" "<<c<<endl;


    return 0;
}
