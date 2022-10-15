#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include <conio.h>

// my custom standard file that contains simple functions like delay
#include "stnd.h"
//file handeler
#include "save-load.h"
//Custom window manager via terminal
#include "win.h"



int playerPos;
int oldPlayerPos;
int player = 5;

int main(int argc, char **argv) {
	int Frame[400] = {
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,8,8,8,8,8,8,8,8,8,8,8,8,9,0,9,8,8,8,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,9,0,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,9,0,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,9,0,9,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  };
	int i;
	int option;
	int Health = 5;
	int Score = 0;
	printf("  click C top close\n");
	delay(2);
	
	playerPos = 55;
	printf("  W A S D to Move        Thats a Plus v 0.3.5\n");
  printFrame(Frame);
	for (i = 0; i< 1000; i++) {
	//set player pos on frame
	printf("\n");
	option = getch();
	printf("%d", option);
	if (option == 119){ 
		playerPos = move(playerPos, Frame, player, 1);
	} else if (option == 115){
		playerPos = move(playerPos, Frame, player, 2);
	} else if (option == 100){
		playerPos = move(playerPos, Frame, player, 3);
	} else if (option == 97){
		playerPos = move(playerPos, Frame, player, 4);
	} else if (option == 99) {
		exit(0);

	} else{
		playerPos = playerPos;
	}
	
	Frame[playerPos] = player;
	//save the player pos so you can remove it
  if (playerPos != oldPlayerPos){
	oldPlayerPos = playerPos;
	Score = Score + 1;
	
	} else {
		Health = Health - 1;
	}

	if ( enemyColide(playerPos, Frame, player) == 1 ) {
		Health = Health - 1;
	}
	

	//print the frame
	
  system("cls");
	printf("  W A S D to Move    C to close         Thats a Plus v 0.3.5\n");
	printFrame(Frame);
  printf("\n  Health: %d/5", Health);
	if (Health == 0) {
		printf("     You Died");
		playerPos = 55;
		printf("                          Score %d", Score);
		Score = 0;
		Health = 5;

	} else {
    printf("                                       Score %d", Score);
	}
	

	
	//remove the player from frame
  
	Frame[oldPlayerPos] = 0;
	}
	return 0;
}
