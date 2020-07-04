//Write a program to calculate GCD using recursion.(hint:Euclidean Algorithm)
#include<stdio.h>
int gcdR(int no1,int no2){
	if(no1==0)
		return no2;
	return gcdR(no2%no1,no1);
}
int gcdR2(int no1,int no2){
	if(no2==0)
		return no1;
	return gcdR2(no2,no1%no2);
}
int main(){
	int no1,no2;
	printf("enter the first no");
	scanf("%d",&no1);
	printf("enter the second number");
	scanf("%d",&no2);
	int ans=gcdR(no1,no2);
	printf("%d\n",ans);
	int sec=gcdR2(no1,no2);
	printf("%d\n",sec);

	return 0;
}
