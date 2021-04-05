#include<stdio.h>

int main()
{
    int n,i;
    float a,b,x[100],y[100];
    printf("Enter the number of set of data:");
    scanf("%d",&n);
     for(i=0;i<n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
		  printf("\n");
	 }

	 float sumX=0,sumY=0,sumX2=0,sumXY=0;
	 for(i=0;i<n;i++)
     {
         sumX=sumX+x[i];
         sumY=sumY+y[i];
         sumX2=sumX2+(x[i]*x[i]);
         sumXY=sumXY+(x[i]*y[i]);
     }
     b=(n*sumXY-(sumX*sumY))/(n*sumX2-(sumX*sumX));
     printf("b=%f\n",b);
     a=(sumY-b*sumX)/n;
     printf("a=%f\n",a);
     printf("Required fit line--> Y=%f+%fX",a,b);
     return 0;
}
