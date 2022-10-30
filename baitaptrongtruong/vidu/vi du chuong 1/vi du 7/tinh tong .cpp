#include <iostream>
using namespace std;

int main()
{
    int n;
    float S = 0;
    cout << "nhap so n can tinh= "<<endl;
    cin >> n;

    for (int i = 1; i <= n;i++)
    {
        S = S + 1.0/(i);
    }
cout << S <<endl;

}
