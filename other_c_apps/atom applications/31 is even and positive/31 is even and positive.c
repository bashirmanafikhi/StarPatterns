#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x;

  printf("\ninput an integer: \n" );
  scanf("%d",&x );

    if (x<0){
      printf("Negative ");
    } else if (x>0){
      printf("Positive ");
    }

    if ((x%2) == 0){
      printf("Even");
    } else{
      printf("Odd");
    }

  return 0;
}
