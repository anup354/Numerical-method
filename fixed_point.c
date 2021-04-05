#include<stdio.h>
#include<math.h>
#define f(x) x*x-5
#define g(x) ((5/x)+x)/2
#define E (0.0001)
int main()
{
    float x0,x1,Error;
    printf("Enter initial gauses \n");
    scanf("%f",&x0);
up:
    x1=g(x0);
    Error=fabs((x1-x0)/x1);
        if(Error>E)
        {
            x0=x1;
            goto up;
        }
        else{
            printf("Root of g(x)=%f",x1);
        }
        return 0;
}
