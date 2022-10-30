#include<iostream>
#include<math.h>
using namespace std;

int main()
{ float a,b;
   float x;
   cout << "chuong trinh tinh phuong trinh bac 1";
   cout <<"\nnhap lan luot a va b";
   cin >> a>>b;
   if (a==0){
   	if (b==0){
   		cout<< "phuong trinh vo so nghiem";}
   		else if (b!=0){
   			cout << "phuong trinh vo nghiem";
   			}
   }
   if (a!=0){
   	cout << "phuong trinh co 1 nghiem";
   	x=-b/a;
   	cout << "\nnghiem phuong trinh la"<<x;
   	}
   	return 0;

}
