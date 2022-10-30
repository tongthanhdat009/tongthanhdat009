#include<iostream> // DUNG COPY CODE!! TAI VI CUNG~ KHONG BIET LA DUNG HAY KHONG VAY NHA =))
#include<math.h>
using namespace std;
float Svuong(int canh)
{
    return pow(canh,2);
}
float Schunhat(int dai, int rong)
{
    return dai*rong;
}
float S3giac(int a, int b, int c)
{
    return sqrt((a+b+c)*(a+b-c)*(b+c-a)*(a+c-b))/4;
}
float Stron(int r)
{
    return pow(r,2)*M_PI;
}
int main()
{
    int n;
    do{
    cout<<"1. Dien tich hinh vuong.\n";
    cout<<"2. Dien tich hinh chu nhat.\n";
    cout<<"3. Dien tich hinh tam giac.\n";
    cout<<"4. Dien tich hinh tron.\n";
    cout<<"Xin chon yeu cau: ";
    cin>>n;
    if (n<=0 || n>4 )
    {   
        cout <<"vui long nhap lai yeu cau: "<<endl;
        continue;
    }
    }while(n<=0 || n>4);
    switch(n)
    {
        case 1:{
        int canh;
        do
        {
            cout<<"Nhap canh hinh vuong: ";
            cin>>canh;
            if (canh <=0)
                {
                    cout<< "Vui long nhap lai canh >0."<<endl;
                    continue;
                }
            else
                {
                cout<<"Dien tich hinh vuong la: "<<Svuong(canh)<<endl;
                cout<<"Cam on da su dung <3!!"<<endl;
                break;
                }
        break;
        }while (canh <=0);
        break;
        }
        case 2:{
        int dai,rong;
        do
        {
        cout<<"Nhap chieu dai hinh chu nhat: ";
        cin>>dai;
        cout<<"Nhap chieu rong hinh chu nhat: ";
        cin>>rong;
        if (dai <=0 || rong <=0)
            {
                cout<< "vui long nhap lai do dai >0."<<endl;
                continue;
            }
        else
            {
                cout<<"Dien tich hinh chu nhat la: "<<Schunhat(dai,rong)<<endl;
                cout<<"Cam on da su dung <3!!"<<endl;
                break;
            }
        }while(dai <=0 || rong <=0);
        break;
        }
        case 3:{
        int a,b,c;
        do
        {
            cout<<"Nhap canh a hinh tam giac: ";
            cin>>a;
            cout<<"Nhap canh b hinh tam giac: ";
            cin>>b;
            cout<<"Nhap canh c hinh tam giac: ";
            cin>>c;
            if (a <= 0 || b<=0 || c<=0)
                {   
                    cout <<"Vui long nhap lai do dai >0." <<endl;
                    continue;
                }
            else if (a + b< c || a + c < b || b + c < a)
                {   
                    cout <<"Vui long nhap lai do dai canh vi khong the tao thanh 1 tam giac " <<endl;
                    continue;
                }
            else    
                {
                cout<<"Dien tich hinh tam giac la: "<<S3giac(a,b,c)<<endl;
                cout<<"Cam on da su dung <3!!"<<endl;
                break;
                }
        }while(a <= 0 || b<=0 || c<=0 || a + b< c || a + c < b || b + c < a );       
        break;
        }
        case 4:{
        int r;
        do
        {
        cout<<"Nhap ban kinh hinh tron: ";
        cin>>r;
        if (r<=0)
            {
                cout << "vui long nhap lai ban kinh."<<endl;
                continue;
            }
        else
            {
                cout<<"Dien tich hinh tron la: "<<Stron(r)<<endl;
                cout<<"Cam on da su dung <3!!"<<endl;
                break;
            }
        }while (r<=0);
        break;

    }
    system("pause");
    return 0;
    
}
}