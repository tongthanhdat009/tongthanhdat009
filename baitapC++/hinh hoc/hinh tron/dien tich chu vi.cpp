#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int R;
    float P,S;
    cout << "nhap R";
    cin >> R;

    P = 2*M_PI*R;
    S = M_PI * pow(R,2);

    printf("dien tich hinh tron la =%f",S);
    printf("chu vi hinh tron la =%f",P);

    return 0;

}
