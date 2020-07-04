#include<stdio.h>
#include<math.h>
int powerR(int base,int exp);
int main(){
	int base=0,exp=0,ans=0;
	printf("enter base:");
	scanf("%d",&base);
	printf("enter exponential");
	scanf("%d",&exp);
	ans=pow(base,exp);
	printf("output1:%d\n",ans);
	ans=powerR(base,exp);
	printf("output2:%d",ans);
	return 0;
}
int powerR(int base,int exp){
	if(exp!=0)
		return powerR(base,exp-1)*base;
	return 1;
}

