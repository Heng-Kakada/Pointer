#include<stdio.h>
int addTwoNumbers(int *, int *);

int main(void){
	int num1, num2, sum;
	
	printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
	printf("-------------------------------------------------------\n"); 
   	
   	printf("Input the first number : ");
   	scanf("%d", &num1);
   	printf("Input the second number : ");
   	scanf("%d", &num2);
   	
   	sum = addTwoNumbers(&num1, &num2);
   	
   	
   	printf("The sum of %d and %d  is %d", num1, num2, sum);
	
}

int addTwoNumbers(int *n1, int *n2){
	
	int sum;
	
	return sum = *n1 + *n2;
}
