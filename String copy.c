#include<stdio.h>
#include<string.h>
int main(){
	char str[100],str1[100],str2[100];
	int i = 0;
	printf("Enter the string : ");
	scanf("%s",str);
	strcpy(str1,str);
	while(str[i] != '\0'){
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	printf("Orginial String : %s\n",str);
	printf("Copied string built function : %s\n",str1);
	printf("Copied string user function : %s\n",str2);
	return 0;
}