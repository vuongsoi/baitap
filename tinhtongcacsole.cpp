#include<stdio.h>
int main(){
	int n=200;
		int s=0;
	for (int i=1;i<=200;i++)
	{
		if(i%2!=0){
			printf("%d\n",i);
			s=s+i;
		}

}

	printf("tong cua cac so le la:%d\n",s);
	
	
	return 0;
}
