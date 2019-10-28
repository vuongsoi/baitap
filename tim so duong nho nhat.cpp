#include<stdio.h>
int main(){
	int n,ary[20];
	printf("Nhap n:\n");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("cac phan tu cua mang la:%d\n",i);
		scanf("%d",&ary[i]);	
	}
		int min=ary[0];		
	for(int i=0;i<n;++i)
	{
		if(min > ary[i]&&ary[i]>=0){
			min = ary[i];
			
		
}
	}
	
	printf("so duong nho nhat la:%d\n",min);	


  

	
	return 0;
}
