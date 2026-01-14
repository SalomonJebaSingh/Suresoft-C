#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three number : ");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>c)){
		printf("A");
	}
	if((b>a) && (b>c)){
		printf("B");
	}
	if((c>a) && (c>b)){
		printf("C");
	}
	return 0;
}