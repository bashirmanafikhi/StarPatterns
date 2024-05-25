#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char arr[15] = "Hello, World!";
		printf("%s\n",arr);

		int i,
			count = 0;

		for(i=0;arr[i]!= 0;i++){
			if(arr[i] == ' ')
			continue;
		count++;
		}

		printf("\n%d\n",count);
	return 0;
}
