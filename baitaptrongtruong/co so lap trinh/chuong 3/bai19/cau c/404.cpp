#include<iostream>
using namespace std;
int dem(int a)
{   int n=0; // tong nhung so khac nhau
    switch (a)
    {
    case 0: n++; break;
    case 1: n++; break;
    case 2: n++; break;
    case 3: n++; break;
    case 4: n++; break;
    case 5: n++; break;
    case 6: n++; break;
    case 7: n++; break;
    case 8: n++; break;
    case 9: n++; break;
    }
}
int sosanh(int a, int b, int c, int d)
{   int tong;
    if (dem(a) == dem(b) == dem(c) == dem(d))
        tong =0;
    else if (dem(a)==dem(b)==dem(c) || dem(a)==dem(d)==dem(c) || dem(b) == dem(d) == dem(c))
        tong =1;
    else if ((dem(a)==dem(c) && dem(a)==dem(d) && dem(a)==dem(b)) || (dem(b)==dem(c)&&dem(b)==dem(c) && dem(b)==dem(d))||(dem(c)==dem(d)&&dem(c)==dem(b)&&dem(c)==dem(a))||(dem(d)==dem(c)&&dem(d)==dem(b)&&dem(d)==dem(a)))
        tong = 2;
    else
        tong = dem(a) + dem(b) + dem(c) + dem(d);
    cout << tong;
}
int main()
{
    int a,b,c,d;//bien so
    int tong=0;  
    cout<<"nhap lan luot 4 so a,b,c,d"<<endl;
    cin >> a >> b >> c >> d;
    sosanh(dem(a),dem(b),dem(c),dem(d));
}  