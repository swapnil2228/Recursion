//Write a program to calculate factorial without using loops.
#include<stdio.h>
int factorial(int no);
int main(){
	int no;
	printf("enter number");
	scanf("%d",&no);
	int ans=factorial(no);
	printf("%d",ans);
	return 0;
}
int factorial(int no){
	if(no==1)return 1;
		return no*factorial(no-1);
}
