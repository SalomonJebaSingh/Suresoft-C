#include<stdio.h>
int main(){
	int p;
	float t,r,I;
	printf("enter the principal amount :");
	scanf("%d",&p);
	printf("enter the rate for the interst :");
	scanf("%f",&r);
	printf("enter the time :");
	scanf("%f",&t);
	I = p*r*t/100;
	printf("Simple Interset : %.2f",I);
	return 0;
}