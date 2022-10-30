#include <conio.h>
#include <math.h>
#include <stdio.h>
int main()
{
    float xa,ya,xb,yb,xc,yc;//toa do
    double ac,ab,bc;// do dai canh
    double p,cv,dt;//cac dai luong can tinh trong do p la nua chu vi
    double xg,yg;// trong tam tam giac

    printf("nhap toa do A(xa;ya) :");
    scanf("%f",xa);scanf("%f",ya);
    printf("nhap toa do B(xb;yb) :");
    scanf("%f",xb);scanf("%f",yb);
    printf("nhap toa do C(xc;yc) :");
    scanf("%f",xc);scanf("%f",yc);

    // tinh do dai
    ac = sqrt(pow(xa - xc,2)+ pow(ya - yc ,2));
    ab = sqrt(pow(xb - xa,2)+ pow(yb - ya ,2));
    bc = sqrt(pow(xc - xb,2)+ pow(yc - yb ,2));

    // tinh chu vi
    cv = ac + ab + bc;

    // tinh nua chu vi
    p = cv/2.0;

    // tinh dien tich
    dt = sqrt(p*(p-ac)*(p-bc)*(p-ab));

    //tinh toa do trong tam tam giac
    xg = (xa+xb+xc)/3.0;
    yg = (ya+yb+yc)/3.0;

    // xuat ket qua
    printf("chu vi tam giac =%d ",cv);
    printf("dien tich tam giac =%d ",dt);
    printf("toa do trong tam g(",xg,",",yg,")");
getch();}
