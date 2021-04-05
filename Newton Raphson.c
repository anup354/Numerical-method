 #include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-3*x+2
#define g(x) 2*x-3
#define E (0.0001)
int main()
{
    float x0,x1,Error;
    printf("Enter initial gauses \n");
    scanf("%f",&x0);
    up:
        if((g(x0))!=0)
        {
            goto down;
        }
        else{
            printf("There is no convergence of root.");
        }
    down:
        x1=x0-((f(x0))/(g(x0)));
        Error=fabs((x1-x0)/x1);
        x0=x1;
        if(Error>E)
        {
            goto up;
        }
        else{
            printf("Root of f(x)=%f",x1);
        }
    return 0;
}

