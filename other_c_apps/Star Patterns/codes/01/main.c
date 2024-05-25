#include <stdio.h>
#include <stdlib.h>

/* By: Bashir Manafikhi - Bashir.manafikhi@gmail.com */

int main(int argc, char *argv[]) {
	
	int row,
		column,
		number;
	
		
	printf("Input the size.. ");
	scanf("%d",&number);
	printf("\n");
	
	row = 0;
	while(row<number){
		
		column = 0;
		while(column<number){
			printf("*");
			column++;
		}
		printf("\n");
		row++;
	}
	
	system("pause");
	return 0;
}
