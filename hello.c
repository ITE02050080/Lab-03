#include<stdio.h>
int main(void) 
{ 
	int input[10],i,j; 
	printf("請輸入十個數字, 用Enter隔開："); 
	for(i=1;i<=10;i++)
	{
		scanf("%d", &input[i]); 
	}
	for(j=1;j<=10;j++)
	{
	 	printf("您輸入的數字為：%d\n", input[j]); 
	}
	return 0; 
}
