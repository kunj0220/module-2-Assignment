#include<stdio.h>
int main()
{
	int value;
	
	printf("enter value");
	scanf("%d",&value);
	
	int square=value*value;
	printf("square is %d" ,square);
	
	int cube=value*value*value;
	printf(" \ncube is %d",cube);
	
	return 0;
}
