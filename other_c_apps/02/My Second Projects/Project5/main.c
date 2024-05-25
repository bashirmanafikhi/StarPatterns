#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	

	float	number[5],
			average,
			positive = 0,
			sum = 0;
		
	
	printf("Input the first number: ");
	scanf("%f",&number[0]);
	printf("Input the second number: ");
	scanf("%f", &number[1]);
	printf("Input the third number: ");
	scanf("%f", &number[2]);
	printf("Input the fourth number: ");
	scanf("%f", &number[3]);
	printf("Input the fiveth number: ");
	scanf("%f", &number[4]);

	for (int i = 0; i < 5; i++)
	{
		if (number[i] > 0) {
			positive++;
			sum += number[i];
		}
	}
	average = sum / positive;
	printf("\nNumber of positive numbers: %d", positive);
	printf("\nAverage value of the said positive numbers: %.2f",average);









	printf("\n\n");
	system("PAUSE");
	return(0);
}