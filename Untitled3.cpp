#include<stdio.h>
int main(){
	int n,ary[20];
	printf("Nhap n=\n");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		// Nhap gia tri cho ary[i]
		int x;
		bool f=true;
		do{
				printf("nhap gia tri ary[%d]=\n",i);
	scanf("%d",&x);
	bool trunglap=false;
	for(int j=0;j<i;++j)
	{
		if(ary[i]==x){
			trunglap=true;
			break;
	}
	}
	if(trunglap==false)
	{
		f=false;
		ary[i]=x;
	}
		}while(f);
		
	}
	for(int i=0;i<n;++i)
		printf("cac gia tri la:%d\n",);
	return 0;
	
}
