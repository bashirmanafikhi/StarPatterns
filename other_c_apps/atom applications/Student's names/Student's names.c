#include <stdlib.h>
#include <stdio.h>
/* يظهر اسس الأعداد الزوجية من الواحد الى قيمة معين */
int main(int argc, char const *argv[]) {
  int length,
      num;
  printf("input a number..\n");
  scanf("%d",&length );
  for (num = 2 ; num <= length; num+=2) {
    printf("%d^2:  %d\n",num,num*num );
  }
  return 0;
}
