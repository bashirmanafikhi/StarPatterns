#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {


	int number[5],
		sum = 0;


	printf("Input the first number: ");
	scanf("%d", &number[0]);
	printf("Input the second number: ");
	scanf("%d", &number[1]);
	printf("Input the third number: ");
	scanf("%d", &number[2]);
	printf("Input the fourth number: ");
	scanf("%d", &number[3]);
	printf("Input the fiveth number: ");
	scanf("%d", &number[4]);

	for (int i = 0; i < 5; i++)
	{
		if ((number[i] % 2) != 0 ) {
			sum += number[i];
		}
	}

	printf("\nSum of all odd values: %d", sum);









	printf("\n\n");
	system("PAUSE");
	return(0);
}