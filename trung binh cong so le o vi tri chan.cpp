#include<stdio.h>
int main(){
	int n,ary[20];
	printf("nhap n:\n");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("cac phan tu cua mang la:%d\n",i);
		scanf("%d",&ary[i]);
	}
	int s=0,t=0;
	float tb;
	for(int i=0;i<n;++i)
	{
		if(ary[i]%2!=0 && i%2==0){
		
		s++;
		t+=ary[i];}
	}
	tb=(float)t/s;
	printf("trung binh cong cac so le o vi tri chan la:%f\n",tb);
	
	return 0;
}
