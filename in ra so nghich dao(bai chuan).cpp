#include<stdio.h>
int main(){
	int ary[160];
	for(int i=0;i<10;++i)
	{
		printf("nhap so:\n");
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<10;++i)
	{
		// Tim so nghich dao cua so thu i--ary[i]
		int t=0,tmp=ary[i];
		while(tmp!=0){
			t=t*10+tmp%10;
			tmp/=10;
		}
		printf("%d\n",t);
	}
	
	return 0;
}
