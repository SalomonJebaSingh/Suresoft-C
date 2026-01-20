#include<stdio.h>
int main(){
	char str[100],str1[100];
	int i = 0,len;
	printf("Enter the string1 : ");
	scanf("%s",str);
	printf("Enter the string2 : ");
	scanf("%s",str1);
	len = strlen(str);
	while(str1[i] != '\0'){
		str[len] = str1[i];
		len++;
		i++;
	}
	str[len] = '\0';
	printf("String concatenation : %s",str);
	return 0;
}