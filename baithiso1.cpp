#include<stdio.h>
int main()
{
	int x1=0,x2=1,x3;
	printf ("Cac so fibonaci trong khoang tu 1 den 100 la :");
	for (int i=1;i<=100;i++)
	{
			x3=x1+x2;
		x1=x2;
		x2=x3;
	
		if (1<=x3 && x3<100) printf ("%d\t",x3);
		
	}
}
