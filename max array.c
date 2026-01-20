#include<stdio.h>
int main(){
	int a[100];
	int n,max,i,pos = 0;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	printf("Enter the element in the array : ");
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(i = 0;i < n;i++){
		if(a[i] > max){
			max = a[i];
			pos = i;
		}
	}
	printf("Max element %d at position %d.",max,pos+1);
	return 0;
}