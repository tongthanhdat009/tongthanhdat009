
#include <iostream>
using namespace std;
int main()
{   int xa,xb; //toa do a,b
    int ya,yb; //toa do a,b
    int x0,y0; //toa do diem bat ki
    int x,y;;//toa diem can kiem tra
    while(true)
    {//nhap toa do:
    cout << "nhap lan luot do hoanh cua 2 diem A,B: "<<endl;
    cout << "nhap toa do hoanh A:"<<endl;cin >> xa;
    cout << "nhap toa do hoanh B:"<<endl;cin >> xb;

    cout << "nhap lan luot do tung cua 2 diem A,B: "<<endl;
    cout << "nhap toa do hoanh A:"<<endl;cin >> ya;
    cout << "nhap toa do hoanh B:"<<endl;cin >> yb;
    //toa do diem bat ki
    cout << "nhap toa do diem bat ki:"<<endl;
    cout << "nhap hoanh do:"<<endl;cin >> x0;
    cout << "nhap tung do:"<<endl;cin >> y0;
    //toa diem can kiem tra
    cout << "nhap toa do diem can kiem tra:"<<endl;
    cout << "nhap hoanh do:"<<endl;cin >> x;
    cout << "nhap tung do:"<<endl;cin >> y;

    //vector AB
    int xAB = xb-xa;
    int yAB = yb-ya;
    //doi thanh vector phap tuyen
    int temp = xAB;
    yAB = -temp;
    xAB =  yAB;
    //AB luc nay AB(yAB;-xAB)
    //pt duong thang ax+by+c=0
    if(xAB*xAB + yAB*yAB != 0)
        {
            float pt =xAB*(x-x0)+yAB*(y-y0);
            if (pt == 0 )
                {
                    cout <<"diem nam trong duong thang AB"<<endl;
                    break;
                }
            else 
                {
                    cout <<"diem khong nam trong duong thang AB"<<endl;
                    break;
                }
        }
    else
        cout <<"vui long nhap lai toa do AB";    
    }
    return 0;
    }
