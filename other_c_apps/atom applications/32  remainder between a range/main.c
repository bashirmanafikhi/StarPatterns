#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
	
	printf("\nWrite a C program to print all numbers between 1 to 500 which divided by a specified number and the remainder will be 3.\n\n\n");
	int i,x;
	printf("Plese Input An Integer: ");
	scanf("%d",&x);
	for(i=0;i<500;i++){
	if((i%x) == 3){
		printf("%d\n",i);
	}
	}
	
	
 	 printf("\nHello world\n");
  return 0;
}
