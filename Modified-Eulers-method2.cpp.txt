#include<stdio.h>
#define f(x,y) (x+y)
int main()
{
	float x0,y0,h,xf,y1,y,x1,steps,x;
	printf("Enter the initial values of x and y:");
	scanf("%f%f",&x0,&y0);
	printf("\nEnter the value of x for which you want to find y:");
	scanf("%f",&xf);
	printf("Enter steps:\n");
	scanf("%f",&steps);
	printf("Step length=%f",h=(xf-x0)/steps);
	y1=(y0+(h*f(x0,y0)));
	printf("y1=%f",y1);
//	y=y1;
	x1=x0+h;
	for(int i=0;i<steps;i++)
	{
		y=y1;
		x=x1;
		y1=(y0+((h/2)*((f(x0,y0))+(f(x,y)))));
	//	y=y1;
		x1=x1+h;
	}
	printf("yf=%f",y1);
	return 0;
}
