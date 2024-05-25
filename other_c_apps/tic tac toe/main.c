#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 0 = false
	
	// Declaring ======================
	
	char player;
	char nums[3][3];
	int i,j, decide,isWin = 0;
	for(i=0 ; i<3; i++){
		for(j=0; j<3; j++){
			nums[i][j] = ' ';
		}
	}
	
	// Drawing ======================
	
	Draw(nums);
	
	// Playing ======================
	
	for(i=0; i<9; i++){
		if(i%2 == 0)
			player = 'X';
		else
			player = 'O';
		
		printf("\n\tPlayer %c\n\tInput where to play: ",player);
		scanf("%d",&decide);
		
		switch(decide){
			case 1:
				nums[0][0] = player;
				break;
			case 2:
				nums[0][1] = player;
				break;
			case 3:
				nums[0][2] = player;
				break;
			case 4:
				nums[1][0] = player;
				break;
			case 5:
				nums[1][1] = player;
				break;
			case 6:
				nums[1][2] = player;
				break;
			case 7:
				nums[2][0] = player;
				break;
			case 8:
				nums[2][1] = player;
				break;
			case 9:
				nums[2][2] = player;
				break;
			default:
				
				break;
		}
		Draw(nums);
		
		if( (nums[0][0] != ' ' && nums[0][0] == nums[0][1] && nums[0][0] == nums[0][2]) ||
			(nums[1][0] != ' ' && nums[1][0] == nums[1][1] && nums[1][0] == nums[1][2]) ||
			(nums[2][0] != ' ' && nums[2][0] == nums[2][1] && nums[2][0] == nums[2][2]) ||
			(nums[0][0] != ' ' && nums[0][0] == nums[1][0] && nums[0][0] == nums[2][0]) ||
			(nums[0][1] != ' ' && nums[0][1] == nums[1][1] && nums[0][1] == nums[2][1]) ||
			(nums[0][2] != ' ' && nums[0][2] == nums[1][2] && nums[0][2] == nums[2][2]) ||
			(nums[0][0] != ' ' && nums[0][0] == nums[1][1] && nums[0][0] == nums[2][2]) ||
			(nums[0][2] != ' ' && nums[0][2] == nums[1][1] && nums[0][2] == nums[2][0]) ){
				printf("\n\tPlayer %c is the winner ..",player);
				isWin = 1;
				getch();
				break;
			}
		
	}
	if(isWin == 0)
		printf("\tno one won! ..\n");
	return 0;
}

void Draw(char nums[3][3]){
	system("cls");
	printf("\n\n");
	printf("\t   |   |   \n\t %c | %c | %c \n\t___|___|___\n", nums[0][0] , nums[0][1] , nums[0][2]);
	printf("\t   |   |   \n\t %c | %c | %c \n\t___|___|___\n", nums[1][0] , nums[1][1] , nums[1][2]);
	printf("\t   |   |   \n\t %c | %c | %c \n\t   |   |   \n\n", nums[2][0] , nums[2][1] , nums[2][2]);
	
}

