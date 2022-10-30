#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    float min;
    cout<<"nhap lan luot a,b va c";
    cin>>a>>b>>c;

    min = a;
        if (b<min){
            min = b;}
            if (c<min){
                    min = c;
                    cout << "gia tri nho nhat la"<<min<<endl;}
            else{
                cout << "gia tri nho nhat la"<<min<<endl;}

            return 0;
}
