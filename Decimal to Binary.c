#include<stdio.h>
int main(){
	int decimal,rem,place = 1,o;
	long long binary = 0;
	printf("Enter the decimal number : ");
	scanf("%d",&decimal);
	o = decimal;
	while(decimal > 0){
		rem = decimal % 2;
		binary = binary + rem * place;
		place = place * 10;
		decimal = decimal / 2;
	}
	printf("Binary value of %d is %lld",o,binary);
	return 0;
}