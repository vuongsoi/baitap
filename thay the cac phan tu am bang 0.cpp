#include<stdio.h>
int main(){
	int n,ary[20];
	printf("nhap n:\n");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
	printf("nhap tung so trong mang:%d\n",i);
	scanf("%d",&ary[i]);	
	}
	for(int i=0;i<n;++i){	
    if(ary[i]<0){
    	ary[i]=0;
	}	
		printf("cac so can tim la:%d\n",ary[i]);
}
	
		
	return 0;
}
