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
		while(rowumnumn<number){
			
			if(rowumnumn >= rowumn){
			printf("*");	
			} else{
			printf(" ");
			}
			
			rowumnumn++;
		}
		
		printf("\n");
		rowumn++;
	}
	
	printf("\n");
	system("pause");
	return 0;
}
