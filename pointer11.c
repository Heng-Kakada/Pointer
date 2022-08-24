#include <stdio.h>
void factorial(int,int *);

int main(void){
	int n, result;
	
	printf("\n\n Pointer : Find the factorial of a given number :\n"); 
	printf("------------------------------------------------------\n");	
	
	printf(" Input a number : ");
	scanf("%d", &n);
	
	factorial(n, &result);
	
	printf("The Factorial of %d is : %d", n, result);
	
}

void factorial(int n, int *p){
	
	int i;
	
	*p = 1;
	
	
	for(i=1 ; i<=n; i++){
		*p = *p * i;
	}
	
//	printf("The Factorial of %d is : %d", n, *p);
}
