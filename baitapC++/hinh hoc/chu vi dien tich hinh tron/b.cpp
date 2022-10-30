#include "stdio.h"
#include "conio.h"
#include "math.h"

int main()
{   float r, cv, dt;
    printf("\n nhap ban kinh:");
scanf("%f",&r);
cv = 2*M_PI *r;
dt = M_PI*r*r;
printf("\n chu vi=%0.2f \n Dien tich= %0.2f ",cv,dt);

getch();
}
