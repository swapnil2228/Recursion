//Accept Number from user and print Binary number equivalent to that number.
  //input: 21
  //output: 10101
  
#include<stdio.h>
int main(){
	int a[10],n,i;
	printf("enter number to convert");
	scanf("%d",&n);
	for(i=0;n>0;i++){
		a[i]=n%2;
		n=n/2;
	}
	printf("\n Binary conversion: ");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
