#include<stdio.h>
int main(){
	int ary[10];
	for(int i=0;i<5;++i)
	{	
	printf("nhap cac phan tu:%d\n",i);
	scanf("%d",&ary[i]);
    }
    int t=ary[0];
    
    for(int i=1;t<5;++t)
    
    if(t=ary[i]%10+t*10){
		
    		printf("nghich dao cua cac phan tu:%d\n",ary[t]);
    	
}

	return 0;
}
