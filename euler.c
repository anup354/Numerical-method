#include<stdio.h>
#include<conio.h>
# define f(x,y) 3*x*x+1
int main()
{
    float x0,y0,h,xp,m,y1,x1;
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);

    printf("y0 = ");
    scanf("%f", &y0);

    printf("h = ");
    scanf("%f", &h);
    printf("Enter point for estimation xp = ");
    scanf("%f", &xp);

    do{
        m=f(x0,y0);
        y1=y0+m*h;
        x1=x0+h;
        x0=x1;
        y0=y1;
    }while(x0<xp);

    printf("Solution of y(xp)=%f",y0);
    return 0;
}
