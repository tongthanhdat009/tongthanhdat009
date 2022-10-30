
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float toan,ly,hoa;
    float diem;
    cout <<"nhap lan luot diem 3 mon toan,ly,hoa";
    cin >> toan >> ly >> hoa;

    float tongdiem = toan + ly + hoa;
    float lamtron = round(tongdiem*100)/100;
    float hieu = lamtron - (int) tongdiem;
    
    if (hieu > 0 && hieu < 0.5)
        {
            float diem = 0.5 - hieu + tongdiem;
            cout << "tong diem ="<<diem;
            
        }
    if (hieu > 0.5 && hieu < 1)
        {
            float diem = 1 - hieu + tongdiem;
            cout << "tong diem ="<<diem;
        }
    return 0;
}
