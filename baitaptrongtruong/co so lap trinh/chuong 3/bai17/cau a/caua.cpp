#include<iostream>
#include<math.h>
using namespace std;
int main()
    {
        int a,b,c,d,e,f;
        cout <<"nhap lan luot a,b,c,d,e,f "<<endl;
        cin >> a >> b >> c >> d >> e >> f;
        int d1=0,d2=0,d3=0; //bien dem
        //dem so am
        if (a<0) d1++;
        if (b<0) d1++;
        if (c<0) d1++;
        if (d<0) d1++;
        if (e<0) d1++;
        if (f<0) d1++;
        //dem so bang 0
        if (a==0) d2++;
        if (b==0) d2++;
        if (c==0) d2++;
        if (d==0) d2++;
        if (e==0) d2++;
        if (f==0) d2++;
        //dem so duong
        if (a>0) d3++;
        if (b>0) d3++;
        if (c>0) d3++;
        if (d>0) d3++;
        if (e>0) d3++;
        if (f>0) d3++;

        cout << "so nho hon 0 co "<<d1<<endl;
        cout << "so = 0 co "<<d2<<endl;
        cout << "so lon hon 0 co "<<d3<<endl;
}