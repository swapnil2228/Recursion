//Write a program to convert  Hexadecimal to Decimal.

#include<stdio.h>
int hexR(int no){
	if(no!=0)
		return 16*hexR(no/10)+(no%10);
}
int main(){
	int no,ans;
	printf("enter the number");
	scanf("%d",&no);
	ans=hexR(no);
	printf("decimal%d",ans);
	return 0;
}
