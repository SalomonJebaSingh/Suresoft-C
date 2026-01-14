#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the two number : ");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("A is big.");
	}
	else{
		printf("B is big");
	}
	return 0;
}