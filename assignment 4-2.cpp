#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for (int i=1;i<n;i++)
	{
		if(i%3==0)
		printf("%d",i);
	}
	
	return 0;
}
