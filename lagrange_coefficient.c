#include<stdio.h>
#include<conio.h>

int main()
{
	 float x[100], y[100], p, sum=0, term,l[100];
	 int i,j,n;


	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=0;i<n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
		  printf("\n");
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &p);

	 for(i=0;i<n;i++)
	 {
		  term=1;
		  for(j=0;j<n;j++)
		  {
			   if(i!=j)
			   {
			    	term = term* (p - x[j])/(x[i] - x[j]);
			   }
			   l[i]=term;
		  }

	 }
	 for(i=0;i<n;i++)
     {
         sum = sum + l[i] * y[i];
     }
	 printf("Interpolated value at %.4f is %.4f", p, sum);
	 return 0;
}
