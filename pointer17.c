#include<stdio.h>
void maxmin(int a[],int n,int *max,int *min);

int main(void) {
	int c[100],i,big,small,n;
	
	printf("input size of array : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		printf("\nelement - %d: ",i+1);
		scanf("%d",&c[i]);
	}
	
	maxmin(c,5,&big,&small);
	
	printf("\nResult of max/min\n");
	
	printf("Biggest number=%d\n",big);
	printf("Smallest number=%d\n",small);
}

void maxmin(int a[],int n,int *max,int *min) {
	
	int i;
	
	*max=*min=a[0];
	
	for(i=1; i<n; i++) {
		if(a[i]>*max) {
			*max=a[i];
		} else if(a[i]<*min) {
			*min=a[i];
		}
	}
}
