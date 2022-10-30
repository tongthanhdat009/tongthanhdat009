#include <iostream>
#include <math.h>
using namespace std;
int main()\
{
    float a,b,c,delta,x1,x2,x;
    cout << "nhap lan luot a,b,c:"<<endl;
    cin >> a>>b >>c;
    if (a != 0)
                {

                {
                delta = pow(b,2) - 4*a*c;

            if (delta > 0)
                {
                    cout<<"phuong trinh co 2 nghiem phan biet"<<endl;
                    x1 = (-b + sqrt(delta))/2*a;
                    x2 = (-b - sqrt(delta))/2*a;
                    cout<<"2 nghiem phuong trinh la"<< " x1="<<x1 <<" x2=" <<x2<<endl;

                }
            if (delta == 0)
                {
                    cout << "phuong co mot nghiem kep" << endl;
                    x = -b/(2.0*a);
                    cout<<"nghiem kep phuong trinh la "<< "x=" <<x << endl;
                }
            else if (delta < 0)
            {
                cout<<"phuong trinh vo nghiem"<<endl;
            }
        }
    if (a == 0)
    {
        cout << "phuong trinh bac 1 roi thang lon oi";
    }
}
return 0;
}
