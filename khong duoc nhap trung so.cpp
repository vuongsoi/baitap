#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;++i)
	{
		printf("Nhap ary[%d]=\n",i);
		scanf("%d",&ary[i]);
		for(int j=0;j<i;++j)
		{
			if(ary[j]==ary[i]){
				printf("nhap lai ary[%d]=\n",i);
				scanf("%d",&ary[i]);
				j=-1;
			}
		}
	}
	return 0;
}
