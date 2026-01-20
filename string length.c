#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int len = 0,i = 0,n;
	printf("Enter the string : ");
	scanf("%s",str);
	while(str[i] != '\0'){
		len++;
		i++;
	}
	n = strlen(str);
	printf("User defined string length : %d\n",len);
	printf("Built String length : %d",n);
}