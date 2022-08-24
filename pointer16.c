#include <stdio.h>

int main(void){
	
	int arr[10], n, i;
	int *p;
	
	printf("\n\n Pointer : Print the elements of an array in reverse order :\n"); 
	printf("----------------------------------------------------------------\n");
	
	printf(" Input the number of elements to store in the array (max 15) : ");
	scanf("%d", &n);
	
	p = &arr[0];  // pt stores the address of base array arr1 
	
	printf(" Input %d number of elements in the array : \n",n);
	
	for(i=0; i<n; i++){
		printf(" element - %d : ", i+1);
		scanf("%d", p);
		p++;
	}	
	
	//reverse
	
	printf("\n The elements of array in reverse order are :");
	
	p = &arr[n - 1];
	
	for(i=n ; i>0 ; i--){
		printf("\n element - %d : %d  ", i, *p);
		p--;
	}
		
}
