#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    int a, b, c;
    string d;
    cout << "nhap lan luot a,b,c" << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        d = "3 canh co the tao 1 tam giac";
        else 
        cout <<"day khong phai la mot tam giac";
        if ( d == "3 canh co the tao 1 tam giac")
            {   
            if (a == b && a == c && b == c)    
                    cout << "day la mot tam giac deu"<<endl;
            else if (a == b || a == c || b == c)
                    cout << "day la mot tam giac can"<<endl;
            else if (a*a + b*b== c*c || a*a + c*c == b*b || b*b + c*c == a*a)
                    cout << " day la mot tam giac vuong" <<endl;
            }        
            else
                cout << "day la mot tam giac thuong"<<endl;
    

}


