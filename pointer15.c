#include <stdio.h>

int sum(int n, int *p);

int main(void){
	
	int a[10], n, i, result;
	
	printf("\n\n Pointer : Sum of all elements in an array :\n"); 
	printf("------------------------------------------------\n"); 
	
	printf(" Input the number of elements to store in the array (max 10) : ");
	scanf("%d", &n);
	
	printf("\n Input %d number of elements in the array : \n",n);
	
	for(i=0; i<n ; i++){
		printf(" element - %d : ", i+1);
		scanf("%d", &a[i]);
	}
	
	result = sum(n, &a);
	
	printf(" The sum of array is : %d\n\n", result);
	
}

int sum(int n,int *p){
	
	int sum = 0, i;
	
	for(i = 0 ; i < n; i++ ){
		sum = sum + *p;
		p++;
	}
	
	return sum;
}
