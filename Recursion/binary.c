#include<stdio.h>
int binary(int no){
	if(no!=0)
		return 10*binary(no/2)+(no%2);
}
int main(){
	int no,ans;
	printf("enter no");
	scanf("%d",&no);
	ans=binary(no);
	printf("%d",ans);
	return 0;
}
