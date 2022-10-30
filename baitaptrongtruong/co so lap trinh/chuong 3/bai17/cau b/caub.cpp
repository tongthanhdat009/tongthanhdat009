#include <string.h>
#include <iostream>
using namespace std;
int main()
    {
        string a,b,c,d,e,f;
        cout <<"nhap lan luot 6 ki tu vao a,b,c,d,e,f"<<endl;
        cin >> a >> b>> c>> d>> e>> f;
        int d1 = 0, d2 =0;//bien dem
        //dem nguyen am
        if (a == "a")d1++;
        else if (a == "e")d1++;
        else if (a == "i")d1++;
        else if (a == "o")d1++;
        else if (a == "u")d1++;
        else d2++;
        
        if (b == "a")d1++;
        else if (b == "u")d1++;
        else if (b == "e")d1++;
        else if (b == "i")d1++;
        else if (b == "o")d1++;
        else d2++;       
        
        if (c == "e")d1++;
        else if (c == "i")d1++;
        else if (c == "o")d1++;
        else if (c == "u")d1++;
        else if (c == "a")d1++;
        else d2++;
        
        if (d == "a")d1++;
        else if (d == "e")d1++;
        else if (d == "i")d1++;
        else if (d == "o")d1++;
        else if (d == "u")d1++;
        else d2++;
        if (e == "a")d1++;
        else if (e == "e")d1++;
        else if (e == "i")d1++;
        else if (e == "o")d1++;
        else if (e == "u")d1++;
        else d2++;
        if (f == "a")d1++;
        else if (f == "e")d1++;
        else if (f == "i")d1++;
        else if (f == "o")d1++;
        else if (f == "u")d1++;
        else d2++;
cout << "so nguyen am la "<<d1<<endl;
cout << "so phu am la "<<d2<<endl;
return 0;




}