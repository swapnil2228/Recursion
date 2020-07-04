//Accept N from User and print N times "*" on screen without loops.
#include<stdio.h>
void print_star(int no);
int main(){
	int no;
	printf("enter number:");
	scanf("%d",&no);
	print_star(no);
	return 0;
}
void print_star(int no){
	if(no>0){
		printf("*");
		print_star(no-1);
	}	
}
