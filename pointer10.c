#include<stdio.h>

void swap(int *, int *, int *);

int main(void){
	
	int n1, n2 , n3;
	
	printf("Input the value of 1st element :");
	scanf("%d", &n1);
	printf("Input the value of 2nt element :");
	scanf("%d", &n2);
	printf("Input the value of 3rd element :");
	scanf("%d", &n3);
	
	
	printf("\nThe value before swapping are :\n");
	
	printf("Input the value of 1st element : %d\n", n1);
	printf("Input the value of 2nt element : %d\n", n2);
	printf("Input the value of 3rd element : %d\n", n3);

	printf("\nThe value after swapping are :\n");
	
	swap(&n1 , &n2, &n3);
}

void swap(int *p1 ,int *p2,int *p3){
	

	int temp;
	
	temp = *p2;
	*p2 = *p1;
	*p1 = *p3;
	*p3 = temp;	
	
	printf("Input the value of 1st element : %d\n", *p1);
	printf("Input the value of 2nt element : %d\n", *p2);
	printf("Input the value of 3rd element : %d\n", *p3);
	
}
	
	
	
	

