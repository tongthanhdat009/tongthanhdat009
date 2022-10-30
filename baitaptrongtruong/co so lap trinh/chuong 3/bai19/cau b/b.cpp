#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	int max1,max2,max3,max;
	int min1, min2,min3,min;
	cout <<"nhap lan luot a,b,c,d"<<endl;
	cin>> a>>b>>c>>d;
	int temp=0;
	if (a>b)
	    max1=a;
	else
	    max1=b;
	if (c>d)
	     max2 = c;
	else
	    max2=d;
	if (max1 > max2)
	    {
            max = max1;
	        max3 =max2;
        }
	  else
	    {
            max = max2;
	        max3 =max1;
        }

	if (a<b)
	    min1=a;
	else
	    min1=b;
	 if (c<d)
	     min2 = c;
	 else
	     min2=d;
	  if (min1 > min2)
	    {
            min= min2;
	        min3=min1;
        }
	  else
	    {   min = min1;
	        min3 = min2;
        }
	   if (min3 > max3)
	    {   temp = min3;
	        min3=max3;
	        max3=temp;
	    }

cout <<"tang dan"<< min<<min3<<max3<<max;
}
