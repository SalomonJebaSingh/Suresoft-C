#include<stdio.h>
#include<string.h>
int main(){
	char str[1000],str1[100];
	printf("Enter the string1 : ");
	scanf("%s",str);
	printf("Enter the string2 : ");
	scanf("%s",str1);
	strcat(str,str1);
	printf("String concatenation : %s",str);
	return 0;
}