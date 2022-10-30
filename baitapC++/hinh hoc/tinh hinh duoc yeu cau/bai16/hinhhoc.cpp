#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dai,rong,P,S; //hcn
    
    int R;//hinh tron
    float P1,S1;//hinh tron

    int a, P2, S2;//hinh vuong

    float ac, ab, bc,S3,P3,p;// tam giac
    string option;//lua chon

    cout << "nhap hinh muon tinh:" <<endl;
    cout << "a. hcn" << endl;
    cout << "b. hinh tron" << endl;
    cout << "c. hinh vuong" << endl;
    cout << "d. tam giac" << endl;
    cin >> option;
    
    if (option == "a")//hcn
    {
        cout << "nhap lan luot dai va rong: "<< endl;
        cin >> dai >> rong;

        S= dai*rong;
        P= (dai + rong)*2;

        cout << "dien tich hinh chu nhat la: " << S <<endl;
        cout << "\nchu vi hinh chu nhat la: " << P << endl;
    }
    
    else if (option == "b")
    {
            cout << "nhap ban kinh R";
            cin >> R;

            P1 = 2*M_PI*R;
            S1 = M_PI * pow(R,2);

            cout << "chu vi hinh tron la ="<< P1 <<endl;
            cout << "dien tich hinh tron la ="<< S1 << endl;
            
    }

    else if (option == "c")
    {
            cout << "nhap canh hinh vuong=";
            cin >>a;

            P2 = 4*a;
            S2 = pow(a,2);

            cout << "chu vi hinh vuong la: "<<P2;
            cout << "dien tich hinh vuong la: "<< S2;

    }
    else if (option == "d")
    {
            cout << "nhap do dai ba canh tam giac ab,ac,bc:"<< endl;
            cin >> ab >> ac >> bc;
            if (ab + ac > bc && ab + bc > ac && bc + ac >ab)
            {   
                P3 = ab + ac + bc;
                p = P3/2.0;
                S3= sqrt(p*(p-ab)*(p-ac)*(p-bc));
                cout << "chu vi hinh hinh tam giac la:"<<P3<<endl;
                cout << "dien tich hinh tam giac la:"<<S3<<endl;
            }
            else
            cout <<"khong phai la tam giac vui long nhap lai do dai"<<endl; 
    }
}