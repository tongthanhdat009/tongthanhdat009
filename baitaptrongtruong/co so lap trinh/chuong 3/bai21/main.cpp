
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int xa,xb,xc,xd; //toa do hoanh hbh
    int ya,yb,yc,yd; //toa do tung hinh binh hanh
    //do dai canh:
    float AC,BD;
    float AB,BC,CD,DA;
    //nhap toa do:
    cout << "nhap lan luot do hoanh cua 4 diem A,B,C,D "<<endl;
    cout << "nhap toa do hoanh A:"<<endl;cin >> xa;
    cout << "nhap toa do hoanh B:"<<endl;cin >> xb;
    cout << "nhap toa do hoanh C:"<<endl;cin >> xc;
    cout << "nhap toa do hoanh D:"<<endl;cin >> xd;
    
    cout << "nhap lan luot do tung cua 4 diem A,B,C,D "<<endl;
    cout << "nhap toa do hoanh A:"<<endl;cin >> xa;
    cout << "nhap toa do hoanh B:"<<endl;cin >> xb;
    cout << "nhap toa do hoanh C:"<<endl;cin >> xc;
    cout << "nhap toa do hoanh D:"<<endl;cin >> xd;
    //tinh do dai 4 canh:
    AB = sqrt(pow(xb-xa,2)+ pow(yb-ya,2));
    BC = sqrt(pow(xb-xc,2)+ pow(yb-yc,2));
    CD = sqrt(pow(xd-xc,2)+ pow(yd-yc,2));
    DA = sqrt(pow(xa-xd,2)+ pow(ya-yd,2));
    //tinh do dai 2 duong cheo
    AC = sqrt(pow(xa-xc,2)+ pow(ya-yc,2));
    BD = sqrt(pow(xd-xb,2)+ pow(yd-yb,2));
    
    if (AB == CD && DA == BC&&( AC /2.0 == BD/2.0))
    {
        cout <<"day la hinh binh hanh.";
    }
    else
        cout << "day la hinh binh hanh.";
    
}
