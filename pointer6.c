#include<stdio.h>
int main(void){
	
	int num[100],i,n;
	
	printf("Input the number of elements to store in the array : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("element [%d] : ", i);
		scanf("%d", num+i);
	}
	
	printf("\n Output \n");
	
	for(i=0; i<n; i++){
		printf("element [%d] : %d\n", i , *(num+i));
	}
	
}
