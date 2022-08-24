#include <stdio.h>

int main(void){
	
	int a[100] , n,i,j;
	
	printf("\n\n Pointer : Sort an array using pointer :\n"); 
	printf("--------------------------------------------\n");	 
	
	printf(" Input the number of elements to store in the array : ");
	scanf("%d", &n);
	
	printf(" Input %d number of elements in the array : \n",n);
	
	for(i=0; i<n; i++){
		printf(" element - %d : ", i+1);
		scanf("%d", a+i);
	}
	
	for(i=0 ; i < n; i++){
		for(j=i+1 ; j < n; j++){
			if(*(a+i) > *(a+j)){
				int temp;
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	
	for(i=0; i<n; i++){
		printf("after sort %d\n", *(a+i));
	}

}
