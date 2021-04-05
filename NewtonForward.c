#include<stdio.h>
int main()
{
    int i,j,n;
    float x[100],y[100],df[100],l[100],temp,p,sum,k,fact,h;
    printf("Enter number of set of data");
    scanf("%d",&n);
     printf("Enter data:\n");
	 for(i=0;i<n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
		  printf("\n");
	 }
    printf("Enter point for estimation: ");
    scanf("%f", &k);

    for(i=1;i<n;i++)
    {
        temp=1;
        for(j=i;j<n;j++)
        {
            temp=df[j]-df[j-1];
            l[i]=temp;
        }
    }

    h=x[1]-x[0];
    p=(k-x[0])/h;

    sum=df[0];
    fact=1;
    for(i=i;i<n;i++)
    {
        temp=1;
        for(j=0;j<i;j++)
        {
            temp=temp*(p-j);
            fact=fact*(j+1);
        }
       sum=sum+((temp*l[i]))/fact;
    }

    printf("Sum=%f",sum);
    return 0;
}
