#include<stdio.h>
#include<conio.h>
# define f(x,y) x+y
int main()
{
    float x0,y0,h,xp,m1,m2,m3,m4,y1,x1;
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
        m1=f(x0,y0);
        m2=f(x0+h/2,y0+m1*h/2);
        m3=f(x0+h/2,y0+m2*h/2);
        m4=f(x0+h,y0+m3*h);

        y1=y0+((m1+2*(m2+m3)+m4)/6)*h;


        x1=x0+h;
        x0=x1;
        y0=y1;
    }while(x0<xp);

    printf("Solution of y(xp)=%f",y0);
    return 0;
}

