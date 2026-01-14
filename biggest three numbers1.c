#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three number : ");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>c)){
		printf("A is big");
	}
	else if((b>a) && (b>c)){
		printf("B is big");
	}
	else{
		printf("C is big");
	}
	return 0;
}