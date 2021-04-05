#include<stdio.h>
#define f(x) 1/(1+x*x)
int main()
{
    int n,i;
    float x[10],h,sum=0,tsum=0,a,b;
    printf("Input the number of sub interval:");
    scanf("%d",&n);

    printf("\nInput lower limit(a):");
    scanf("%f",&a);

    printf("\nInput upper limit(b):");
    scanf("%f",&b);

    h=(b-a)/n;
    x[0]=a;

    sum=f(a)+f(b);

        for(i=1;i<n;i++)
        {
           x[i]=x[0]+i*h;
           sum=sum+2*f(x[i]);
        }
    tsum=sum*h/2;
    printf("Total Sum=%f",tsum);
    return 0;
}
