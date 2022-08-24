#include<stdio.h>
int main(void){
	
	int count = 1 ,i,n ;
	
	char str[100];
	
	printf("\n\n Pointer : Calculate the length of the string :\n"); 
	printf("---------------------------------------------------\n");
	
	printf(" Input a string : ");
	scanf("%s", str);
	
	char *ch = &str;

	while (*ch != '\0'){
		count ++;
		*ch++;
	}
	
	printf("The length of the given string %s : %d", str, count-1);
	
}
