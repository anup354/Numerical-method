#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x-2*x-5)
//#define f(x) (x*log(x)-1)
#define E (0.0001)
void main()
    {
        float x0,x1,x2,Error;
        printf("Enter initial gauses\n");
        scanf("%f%f",&x0,&x1);
    up:
        x2=(x1-((f(x1)*(x1-x0))/(f(x1)-f(x0))));
        Error=fabs((x2-x1)/x2);
        if(Error>E)
            {
            x0=x1;
            x1=x2;
            goto up;
            }
        else
            {
            printf("Root is %f",x2);
            }
    }
