#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a,b,c;
    float max,min;
    cout<<"nhap vao 3 so a,b,c";cin>>a>>b>>c;

    max = a;
    if (b>max){
        max = b;
        if (c>max){
                max = c;
                cout << "gia tri lon nhat la"<<max<<endl;}
        else {
            cout << "gia tri lon nhat la"<<max<<endl;}
        }
    min = a;
        if (b<min){
            min = b;
            if (c<min){
                    min = c;
                    cout << "gia tri nho nhat la"<<min<<endl;}
            else {
                cout << "gia tri nho nhat la"<<min<<endl;}
            }
            return 0;

    }

