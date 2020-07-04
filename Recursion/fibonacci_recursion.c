#include<stdio.h>
int fibR(int n){
	if(n==0 || n==1)
		return n;
	return fibR(n-1)+fibR(n-2);
}
int main(){
	int no,ans;
	printf("enter no");
	scanf("%d",&no);
	ans=fibR(no);
	printf("fib:%d",ans);
	return 0;
}
