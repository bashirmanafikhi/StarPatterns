#include <stdio.h>
#include <stdlib.h>

/* By: Bashir Manafikhi - Bashir.manafikhi@gmail.com */

int main(int argc, char *argv[]) {
	
	int rowumn,
		rowumnumn,
		number;
		
	printf("Input the size.. ");
	scanf("%d",&number);
	printf("\n");
	
	rowumn = 0;
	while(rowumn<number){
		rowumnumn = 0;
		while(rowumnumn<number-rowumn){
			
			if(rowumnumn == 0 || rowumn == 0 || rowumn+rowumnumn == number-1){
			printf("*");	
			} else{
			printf(" ");
			}
			
			rowumnumn++;
		}
		
		printf("\n");
		rowumn++;
	}
	
	system("pause");
	return 0;
}
