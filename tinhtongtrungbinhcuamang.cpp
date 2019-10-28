#include<stdio.h>
int main(){
	int ary[10];
	for (int i=0;i<10;i++)
	{
	printf("nhap phan tu thu:%d\n",i);
	scanf("%d",&ary[i]);
    }
    float s=ary[0];
    for(int i=1;i<10;++i)  
    if(s+=ary[i]){
    }
    s=float(s/10);
   
    printf("so can tim la:%f",s);
	return 0;
}
