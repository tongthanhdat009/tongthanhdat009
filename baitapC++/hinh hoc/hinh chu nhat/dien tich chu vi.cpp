#include <iostream>
#include <math.h>
using namespace std;

int main(){
int dai,rong,P,S;

cout << "nhap lan luot dai va rong";
cin >> dai >> rong;

S= dai*rong;
P= (dai + rong)*2;

cout << "dien tich hinh chu nhat la: " << S;
cout << "\nchu vi hinh chu nhat la: " << P;

return 0;
}
