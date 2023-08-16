#include<stdio.h>
#define f(x,y) ((y-x)/(y+x))
int main()
{
	float x0,y0,xf,y,h,steps;

	printf("Enter the initial value of x and y:\n");
	scanf("%f%f",&x0,&y0);
	printf("Enter the value of x for which you want y:\n");
	scanf("%f",&xf);
	printf("Enter the number of steps:\n");
	scanf("%f",&steps);
	h=(xf-x0)/steps;
	printf("Step length=%f\n",h);
	printf("x	y\n");
	for(int i=0;i<steps;i++)
	{
		if(x0<=xf)
		{
			y=(y0)+(h*((y0-x0)/(y0+x0)));
		    printf("%f	%f\n",x0,y0);
		    y0=y;
		    x0=x0+h;
		}
	}
	printf("The value of y is %f at x= %f", y0, x0);
	
	return 0;
}
