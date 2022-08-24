#include<stdio.h>

int bigNum (int *,int *);

int main(void){
	
	
	int num1, num2, *result;
	
	printf("\n\n Pointer : Show a function returning pointer :\n"); 
	printf("--------------------------------------------------\n");
	printf(" Input the first number : ");
	scanf("%d", &num1);
	printf(" Input the second  number : ");
	scanf("%d", &num2);
	
	result = bigNum (&num1, &num2);
	
	printf("The number %d is larger", *result);
	
	
}

int bigNum (int *p1,int *p2){
	
	if (*p1 > *p2){
		return p1;
	}else{
		return p2;
	}

}
