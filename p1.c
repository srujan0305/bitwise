#include<stdio.h>
int main()
{
	typedef int i;
	i num;
	printf("Enter the number \n");
	scanf("%d",&num);
	num&1?puts("sets\n"):puts("clear\n");
}


