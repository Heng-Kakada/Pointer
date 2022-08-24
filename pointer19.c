#include <stdio.h>

int main(void){
	
	int x,y,*px,*py,**ptx,**pty;
	int min,max;
	
	printf("Find Max and Min by Using ** operator : \n");
	printf("------------------------------------------------\n");

	ptx = &px;
	pty = &py;
	px = &x;
	px = &y;
	
	printf("input x = ");
	scanf("%d", &x);
	printf("input y = ");
	scanf("%d", &y);
	
	
	if (**ptx > **pty){
		min=**pty;
		max=**ptx;	
	}else{
		min=**ptx;
		max=**pty;
	}
	
	printf("maximum is %d and Minimum is %d", max, min);
	
	
}
