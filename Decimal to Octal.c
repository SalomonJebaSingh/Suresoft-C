#include<stdio.h>
int main(){
	int decimal,rem,place = 1,o;
	int octal = 0;
	printf("Enter the decimal number : ");
	scanf("%d",&decimal);
	o = decimal;
	while(decimal > 0){
		rem = decimal % 8;
		octal = octal + rem * place;
		place = place * 10;
		decimal = decimal / 8;
	}
	printf("Octal value of %d is %d",o,octal);
	return 0;
}