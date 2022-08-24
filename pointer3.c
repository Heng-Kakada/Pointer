#include<stdio.h>
int main(void){
	int firstNum, secondNum;
	int *ptr, *qtr;
	
	printf("Input the first number : ");
	scanf("%d", &firstNum);
	printf("Input the Second number : ");
	scanf("%d", &secondNum);
	
	ptr = &firstNum;
	qtr = &secondNum;
	
	printf("The sum of %d and %d  is %d", *ptr, *qtr, *ptr+*qtr);
}
