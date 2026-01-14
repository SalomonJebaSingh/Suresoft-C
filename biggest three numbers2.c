#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three number : ");
	scanf("%d%d%d",&a,&b,&c);
	((a>b) &&  (a>c)) ? printf("A") :((b>a) && (b>c)) ? printf("B") : printf("C");
	return 0;
}