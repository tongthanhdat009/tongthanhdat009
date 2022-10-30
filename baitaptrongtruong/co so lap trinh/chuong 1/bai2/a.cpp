#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f,dx,dy,g,x,y;
    cout<<"nhap lan luot he so pt 1 va pt 2"<<endl;
    cin >> a>> b>> c>> g>> e>> f;

    cout << "pt 1 la " << a << "x" << "+"<< b <<"y"<<"="<< c <<endl;
    cout << "pt 1 la " << g << "x" << "+"<< e <<"y"<<"="<< f <<endl;

// giai bang phuong phap cramer
    d = a*e-b*g;
    dx = c*e-b*f;
    dy =a*f-c*g;
    if (d==0)
        {   if(dx == dy == 0)
            {
                cout<<"phuong trinh co vo so nghiem"<<endl;}
              else
                cout <<"phuong trinh vo nghiem"<<endl;
            }
    else
    cout<<"phuong trinh co 2 nghiem(x,y)"<<endl;
                // tinh nghiem x,y
    x= dx/d;
    y= dy/d;
    cout << "nghiem x= "<<x<<endl;
    cout << "nghiem y= "<<y<<endl;
    }


