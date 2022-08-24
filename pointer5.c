#include<stdio.h>
int main(void){
	int num1,num2;
	int *p1, *p2;
	p1 = &num1;
	p2 = &num2;
	
	printf("Input the first number : ");
	scanf("%d", &num1);
	printf("Input the second  number : ");
	scanf("%d", &num2);
	
	if (*p1 > *p2){
		printf("%d is the maximum number", *p1);
	}else{
		printf("%d is the maximum number", *p2);
	}
	
	
	
}
