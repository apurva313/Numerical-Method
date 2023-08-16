#include<stdio.h>
int main()
{
	int x[5][6],i,j,a,h,fact=1;
	float temp=1,f,u,s;
	printf("Enter the values of x:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i][0]);
	}
	printf("Enter the values of y:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i][1]);
	}
	for(j=2;j<6;j++)
	{
		for(i=0;i<5;i++)
		{
			x[i][j]=x[i+1][j-1]-x[i][j-1];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	printf("Enter the value of x for which you want y:");
	scanf("%f",&s);
	a=x[4][0];
	h=x[1][0]-x[0][0];
	u=(s-a)/h;
	printf("\nu=%f",u);
	f=x[4][1];
	i=3;
	for(j=0;j<4;j++)
	{
		fact=fact*(j+1);
		temp=temp*(u+j);
		f=f+((temp)/fact)*(x[i][j+2]);
		i--;
	}
	printf("f=%f",f);
}
