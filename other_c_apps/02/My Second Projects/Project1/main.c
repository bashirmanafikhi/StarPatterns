#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("reads two integers and checks if they are multiplied or not.\n\n");
	int a, b;
	printf("Input the first number: ");
	scanf("%d", &a);
	printf("Input the second number: ");
	scanf("%d", &b);
	if (b>a)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if ((a%b)==0)
	{
		printf("\nMultiplied!\n");
	}
	else
	{
		printf("\nNot Multiplied!\n");
	}

	printf("\n\n");
	system("PAUSE");
	return(0);
}