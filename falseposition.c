#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x-2*x-5)
#define E (0.0001)
void main()
{
    float x0,x1,x2,Error;
   up:
    printf("Enter initial gauses\n");
    scanf("%f%f",&x0,&x1);
    if(f(x0)*f(x1)>0)
    {
        printf("The root does not exist on those gauses\n");
    goto up;
    }
    else
    {   next:
        x2=(x0-((f(x0)*(x1-x0))/(f(x1)-f(x0))));
        Error=fabs((x2-x0)/x2);
        if(f(x2)*f(x1)<0)
        {
            x0=x2;
        }
        else
        {
            x0=x1;
        }
        if(Error>E)
        {
            goto next;
        }
        else
        {
            printf("The root is %f \n",x2);
        }
    }
}
