#include <iostream>
using namespace std;
int main()
{   int n,a;
    cout << "nhap so can xet"<<endl;
    cin >> n;
    int i=0;
    while (i < n)
    {   a = i % 2;
        if (a == 0)
        {   cout << i;
            i++;
        }
        else
            cout << i;
            i ++;
    }

}
