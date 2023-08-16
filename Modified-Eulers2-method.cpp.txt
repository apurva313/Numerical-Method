#include<stdio.h>
#define f(x,y) (x+y)
int main()
{
	float x[100],y[100],yr[100],h,n,xrq,yrq[100];
	int j;
	printf("Enter the initial value of x and y:");
	scanf("%f%f",&x[0],&y[0]);
	printf("Enter the value of x for which you want to find y:");
	scanf("%f",&xrq);
	printf("Enter the num of steps(iteration):");
	scanf("%f",&n);
	h=(xrq-x[0])/n;
	printf("Step length(h)=%f",h);
	for(int i=1;i<=n;i++)
	{
		x[i]=x[i-1]+h;
		y[i]=y[i-1]+(h*f((x[i-1]),(y[i-1])));
		printf("By using Eulers method-> x[%d]=%f  y[%d]=%f",i,x[i],i,y[i]);
		
		for( j=1;j<=(yrq[j]==y[i]);j++)
		{
			y[i]=y[i-1]+(h/2)*(f((x[i-1]),(y[i-1]))+f((x[i]),(y[i])));
			yrq[j]=y[i];
			y[j]=y[i-1]+(h/2)*(f((x[i-1]),(y[i-1]))+f((x[i]),(yrq[i])));
			if(y[i]==yr[j])
			{
				printf("y[%d]=%f",i,y[i]);
				break;
			}
			else
			{
				continue;
			}
		}
		printf("yrq=%f",yrq[j]);
	}
}
