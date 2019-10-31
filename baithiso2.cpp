#include<stdio.h>
int main(){
	int sonam;
	float tongvon,tylesolai;
	printf("tongvon la:\n");
	scanf("%f",&tongvon);
	printf("tylesolai la:\n");
	scanf("%f",&tylesolai);
	printf("sonam la:\n");
	scanf("%d",&sonam);
    for(int i=1;i<=sonam;++i){
    	float lai=(tongvon*tylesolai)/100;
    	tongvon+=lai;
    	printf("sonam:%d\n tien lai:%f\n tongtien:%f\n",i,lai,tongvon);
	}
		
	
	return 0;
}
