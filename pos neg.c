#include<stdio.h>
int main(){
	int a[100];
	int pos = 0,neg = 0,spos = 0,sneg = 0,n;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	printf("Enter the element in the array : ");
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		if(a[i] > 0){
			pos++;
			spos += a[i];
		}
		else{
			neg++;
			sneg += a[i];
		}
	}
	printf("Count of positive : %d\n",pos);
	printf("Sum of positive : %d\n",spos);
	printf("Count of negative : %d\n",neg);
	printf("Sum of negative : %d",sneg);
	return 0;
}