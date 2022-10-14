#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
	int Frame[100] = {
1,1,1,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,1,
1,1,1,1,1,1,1,1,1,1
  };
	int i;
	printf("Starting\n");
	delay(2);
	
		playerPos = 51;

	for (i = 0; i< 1000; i++) {
	//set player pos on frame
	Frame[playerPos] = player;
	//save the player pos so you can remove it
	
	oldPlayerPos = playerPos;
	
	
	//print the frame
	printFrame(Frame);
	//remove the player from frame
  
	Frame[oldPlayerPos] = 0;
	
	// Check if the position that the player is being moves has something thire 
	//if it does it doesent move the player
	if (badPlayerpos(playerPos, Frame, player) == 0) {
		playerPos = playerPos + 1;
	} else if (badPlayerpos(playerPos, Frame, player) == 2){
		// moves player to start of window
		playerPos = 11;
		
	} else {
		 playerPos = playerPos + 3;
	}

	

	delay(0.5);
	}
	

	

	
	
	return 0;
}
