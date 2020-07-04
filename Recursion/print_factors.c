//Write a program to print factors  without using loops.
#include<stdio.h>
void factors(int no){
	static int i=1;
	if(i>no){
		return;
	}
	if(no%i==0){
		printf("%d	",i);
	}
		i++;
		factors(no);

}
int main(){
	printf("enter the number");
	int no;
	scanf("%d",&no);
	factors(no);
	return 0;
}
