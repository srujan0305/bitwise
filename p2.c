#include<stdio.h>
#define float int
typedef float integer;
int main()
{
	enum num{one=1};
	integer num;
	printf("Enter the number \n");
	scanf("%d",&num);
	num&(one<<31)?puts("msb is set \n"):puts("clear");
}

