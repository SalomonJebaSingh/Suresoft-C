#include<stdio.h>
int main(){
	int a[100];
	int n,tem;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	printf("Enter the element in the array : ");
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n-1;i++){
		for(int j = 0;j < n-1-i;j++){
			if(a[j]>a[j+1]){
				tem = a[j];
				a[j] = a[j+1];
				a[j+1] = tem;
			}
		}
	}
	printf("Sort element in the array : ");
	for(int i = 0;i < n;i++){
		printf("%d",a[i]);
	}
	return 0;
}