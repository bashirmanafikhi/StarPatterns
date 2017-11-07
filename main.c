#include <stdio.h>

/* 

it is by me  (( Bashir Manafikhi ))
bashir.manafikhi@gmail.com

*/

int main(int argc, char *argv[]) {

	int i;

	printf(" =================== \n");

	i = 0;
	while (i<5) {
		int j = 0;
		while (j<5) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;


	printf(" =================== \n");

	i = 0;
	while (i<5) {
		int j = 0;
		while (j-i<=0) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;

	printf(" =================== \n");

	i = 0;
	while (i<5) {
		int j = 0;
		while (j+i<5) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;

	printf(" =================== \n");

	i = 0;
	while (i<5) {
		int j = 0;
		while (j<5) {
			if ( i==0 || i==4 || j == 0 || j == 4 ) {
				printf("*");
			} else {
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;

	printf(" =================== \n");

	i = 0;
	while (i<5) {
		int j = 0;
		while (j+i<5) {
			if ( i==0 || i+j==4 || j == 0) {
				printf("*");
			} else {
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;

	printf(" =================== \n");

	i = 0;
	while (i<5) {
		int j = 0;
		while (j-i<=0) {
			if ( i==4 || i-j==0 || j == 0) {
				printf("*");
			} else {
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;

	return 0;
}
