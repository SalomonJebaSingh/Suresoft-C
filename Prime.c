#include<stdio.h>
int main(){
	int a;
	int prime = 1;
	printf("Enter the number : ");
	scanf("%d",&a);
	if(a<=1){
		prime = 0;
	}
	else{
		for(int i = 2;i*i <= a;i++){
			if(a % i == 0){
				prime = 0;
				break;
			}
		}
	}
	if(prime)
		printf("Prime");
	else
		printf("Not Prime");
	return 0;
}