#include<stdio.h>
#define f(x) 1/(1+x*x)
int main()
{
    int n,i;
    float x[10],h,sum=0,tsum=0,a,b;
    printf("Input the number of segment:");
    scanf("%d",&n);

    printf("Input lower limit(a):");
    scanf("%f",&a);

    printf("Input upper limit(b):");
    scanf("%f",&b);

    h=(b-a)/n;
    x[0]=a;

    sum=f(a)+f(b);

        for(i=1;i<n;i++)
        {
           x[i]=x[0]+i*h;
           if(i%3==0)
           {
              sum=sum+2*f(x[i]);
           }
           else{
            sum=sum+3*f(x[i]);
           }
        }
    tsum=sum*3*h/8;
    printf("Total Sum=%f",tsum);
    return 0;
}


