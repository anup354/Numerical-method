#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x-4*x-10)
#define E (0.0001)
void main()
{
    float x1,x2,x,Error;
    here:
    printf("Enter initial gauses\n");
    scanf("%f%f",&x1,&x2);
    if(f(x1)*f(x2)>0)
    {
        printf("The root does not exist on those gauses\n");

    goto here;
    }
    else
    {   next:
        x=(x1+x2)/2;
        Error=fabs(x1-x2);
        if(f(x)*f(x1)<0)
        {
            x2=x;
        }
        else
        {
            x1=x;
        }
        if(Error>E)
        {
            goto next;
        }
        else
        {
            printf("The root is %f \n",x);
        }
    }
}
