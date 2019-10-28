#include<stdio.h>
int main(){
	{
	int a,b,c;
	do{
		printf("nhap 3 canh:\n");
		scanf("%d%d%d",&a,&b,&c);
	}
	while(b*b-4*a*c>=0);
	printf("day la tam giac\n");
}
	return 0;
	
}
