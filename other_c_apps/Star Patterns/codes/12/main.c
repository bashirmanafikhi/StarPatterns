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
	
	if(number%2==0)
		number--;
		
	rowumn = 0;
	while(rowumn<number/2+1){
		
		rowumnumn = 0;
		while(rowumnumn<number){
			
			if(rowumnumn>=number/2-rowumn&&rowumnumn<=number/2+rowumn){
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
