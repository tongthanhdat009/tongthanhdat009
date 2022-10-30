#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d,temp;
    cout<<"nhap lan luot 4 so a,b,c,d"<<endl;
    cin >> a >> b >> c >> d;
    temp = a;
    if (b>temp) temp=b;
    else temp = temp;
    if (c>temp) temp=c;
    else temp = temp;
    if (d>temp) temp=d;
    else temp = temp;

    int temp1 = a;
    if (b<temp1) temp1=b;
    else temp1 = temp1;
    if (c<temp1) temp1=c;
    else temp1 = temp1;
    if (d<temp1) temp1=d;
    else temp1 = temp1;

    cout <<"GTLN va GTNN trong 4 so la "<< temp << " " << temp1 <<endl;
    return 0;
    
}