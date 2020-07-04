//Write a program to convert  Octal to decimal.
#include<stdio.h>
int octalR(int no){
	if(no!=0)return 8*octalR(no/10)+(no%10);
}
int main(){
	int no,ans;
	printf("enter the number");
	scanf("%d",&no);
	ans=octalR(no);
	printf("octal:%d",ans);
	return 0;
}
