#include<iostream>
using namespace std;
int main()
{
    string p1,p2; //nguoi choi
    cout << "hay nhap lua chon p1" << endl;
    cin >> p1; // bua ~ b; bao ~ a; keo ~ k
    cout << "hay nhap lua chon p2" << endl;
    cin >> p2;

    if ((p1 =="bua" && p2 =="bua") || (p1 =="keo" && p2 =="keo") || (p1 =="bao" && p2 =="bao"))
        {
            cout << "hoa`"<< endl;
        }
    else if (p1 =="bua" && p2 =="keo")
    {
        cout << "p1 win " << endl;
        cout << "p2 lose " << endl;
    }
    else if (p1 =="bua" && p2 =="bao")
    {
        cout << "p1 win " << endl;
        cout << "p2 lose " << endl;
    }
    else if (p1 =="keo" && p2 =="bao")
    {
        cout << "p1 win " << endl;
        cout << "p2 lose " << endl;
    }
    else
    {
        cout << "p2 win " << endl;
        cout << "p1 lose " << endl;    
    }

}