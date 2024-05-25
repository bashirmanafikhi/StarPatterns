#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e, negative=0, positive=0;
	printf("Input the first number: ");
	scanf("%d", &a);
	if (a > 0)
		positive++;
	else if (a < 0)
		negative++;
	printf("Input the second number: ");
	scanf("%d", &b);
	if (b > 0)
		positive++;
	else if (b < 0)
		negative++;
	printf("Input the third number: ");
	scanf("%d", &c);
	if (c > 0)
		positive++;
	else if (c < 0)
		negative++;
	printf("Input the fourth number: ");
	scanf("%d", &d);
	if (d > 0)
		positive++;
	else if (d < 0)
		negative++;
	printf("Input the fiveth number: ");
	scanf("%d", &e);
	if (e > 0)
		positive++;
	else if (e < 0)
		negative++;

	printf("\nNumber of positive numbers: %d", positive);
	printf("\nNumber of negative numbers: %d",negative);

	/*�� ������ ��� ���� �� ���*/
	/*
	float numbers[5];
	int j, pctr=0, nctr=0;
	printf("\nInput the first number: ");
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: ");
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: ");
    scanf("%f", &numbers[2]);
	printf("\nInput the fourth number: ");
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: ");
    scanf("%f", &numbers[4]);

	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
			pctr++;
		else if(numbers[j] < 0)
			nctr++;
	}

	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nNumber of negative numbers: %d", nctr);
	printf("\n");
	*/
	printf("\n\n");
	system("PAUSE");
	return(0);
}
