#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, p, s;
    cout << "nhap canh hinh vuong=";
    cin >>a;

    p = 4*a;
    s = pow(a,2);

    cout << "chu vi hinh vuong la: "<<p;
    cout << "dien tich hinh vuong la: "<< s;

    return 0;
}
