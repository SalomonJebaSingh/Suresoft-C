#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the Two number :");
	scanf("%d%d",&a,&b);
	printf("before swap\n a = %d b = %d\n",a,b);
	b = a+b;
	a = b-a;
	b = b-a;
	printf("after swap\n a = %d b = %d",a,b);
	return 0;
}