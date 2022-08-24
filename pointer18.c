#include <stdio.h>

void swap1(int *p1,int *p2);

int main(void)
{

  int n1,n2;
  
  printf("input n1,n2\n");
  
  scanf("%d%d",&n1,&n2);
  
  printf("\nbefor\n");
  
  printf("n1 = %d\n",n1);
  printf("n2 = %d\n",n2);
  
  swap1(&n1,&n2);
}
void swap1(int * p1,int *p2)
{
  int temp;
  
  temp=*p1;
  
  *p1=*p2;
  
  *p2=temp;
  
  printf("after\n");
  printf("num1 = %d\n",*p1);
  printf("num2 = %d\n",*p2);
}
