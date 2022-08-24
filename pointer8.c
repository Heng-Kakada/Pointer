#include<stdio.h>
int main(void){
	int num[100],n,i;
	
	printf("\n\n Pointer : Find the largest element using Dynamic Memory Allocation :\n"); 
	printf("-------------------------------------------------------------------------\n"); 	
	
	printf("Input total number of elements(1 to 100): ");
	scanf("%d", &n);
	
	
	for(i=1; i<=n ; i++){
		printf("number %d: ", i);
		scanf("%d", num+i);
	}
	
	for(i=1; i<=n; i++){
		if(*num < *(num+i)){
			*num=*(num+i);
		}
	}
	
	printf("The Largest element is : %d", *num);
	
}
