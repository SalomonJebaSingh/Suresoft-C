#include<stdio.h>
#define pi 3.14
int main(){
	int r;
	float area;
	printf("Enter the raduis of circle : ");
	scanf("%d",&r);
	area = pi*r*r;
	printf("Area of a circle : %.2f",area);
	return 0;
}