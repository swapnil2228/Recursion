//Write a program to convert Decimal to Octal.
#include<stdio.h>
int octalR(int no){
	if(no!=0)return 10*octalR(no/8)+(no%8);
}
int main(){
	int no,ans;
	printf("enter the number");
	scanf("%d",&no);
	ans=octalR(no);
	printf("octal:%d",ans);
	return 0;
}
