//Write a program to convert   Decimal to Hexadecimal.

#include<stdio.h>
int hexR(int no){
	if(no!=0)
		return 10*hexR(no/16)+(no%16);
}
int main(){
	int no,ans;
	printf("enter the number");
	scanf("%d",&no);
	ans=hexR(no);
	printf("hexadecimal%d",ans);
	return 0;
}
