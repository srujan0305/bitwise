#include<stdio.h>
int main()

{
	int num,n,newNum;
	printf("Enter any number: ");
	scanf("%d", &num);
	printf("enter nth bit to set(0-31):");
	scanf("%d", &n);
	newNum = (1<<n) | num;
	printf("bit set successfully");
	printf("Number before setting %d bit: %d (in decimal)\n", n, num);
	printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);
}
