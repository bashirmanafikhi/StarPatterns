#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

  int i,studentsNo;
  printf("\nHow many students do you want: \n" );
  scanf("%d",&studentsNo );
  char myStudent[studentsNo][20];

  for (i = 0; i < studentsNo; i++) {
    printf("\nEnter the name of student no: %d\n",i+1 );
    scanf("%s",&myStudent[i]);
  }
  printf("\nThank You\n" );
  printf("Students Names is:\n\n" );

  for (i = 0; i < studentsNo; i++) {
    printf("\n\t - %s\n",myStudent[i] );
  }

  return 0;
}
