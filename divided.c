#include<stdio.h>
int main()
{
    int i,j,n;
    float x[100],y[100],ddf[100],l[100],temp,p,sum=0,a[100],b[100];
    printf("Enter number of set of data:");
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
	 scanf("%f", &p);
	 for(i=0;i<n;i++)
     {
         ddf[i]=y[i];
     }

     for(i=1;i<n;i++)
	 {
		  a[i]=1;
		  for(j=i;j<n;j++)
		  {
			    	a[i]=(ddf[j]-ddf[j-1])/(x[j]-x[j-i]);
                    b[i]=a[i];
		  }

	 }
    sum=ddf[0];
	 for(i=0;i<n;i++)
     {
         temp=1;
         for(j=0;j<i;j++)
         {
             temp=temp*(p-x[j]);
         }
            sum=sum+b[i]*temp;
     }
/*for(i=0;i<n;i++)
{
    sum=sum+b[i]*temp;
}*/
     printf("Sum=%f",sum);
     return 0;

}
