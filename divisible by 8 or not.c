#include<stdio.h>
int main(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	if(a % 8 == 0){
		printf("Divisible by 8.");
	}
	else{
		printf("Not Divisible by 8.");
	}
	return 0;
}