#include<stdio.h>
int main(){
	int a[100];
	int sum = 0,n,i=0;
	float avg;
	printf("Enter the number of element in the array : ");
	scanf("%d",&n);
	printf("Enter the element in the array : ");
	while(i < n){
		scanf("%d",&a[i]);
		i++;
	}
	for(i = 0;i < n;i++){
		sum += a[i];
	}
	avg = sum / n;
	printf("Sum of array : %d\n",sum);
	printf("Average of array : %.2f",avg);
	return 0;
}