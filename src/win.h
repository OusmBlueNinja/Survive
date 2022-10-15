#include <stdio.h>
#include <stdlib.h>

void printFrame(int Frame[]) {

  int i;
  int y = 0;
  int DEBUG = 0;
  system("cls");
  for (i = 0; i< 400; i++) {
    if (y == 20) {
      y = 0;
      printf("\n");
    }
    ++y;
    if (Frame[i] == 0) {
      printf("   ");
    } else if (Frame[i] == 1) {
      printf("  #");
    } else if (Frame[i] == 2) {
      printf("  $");
    } else if (Frame[i] == 3) {
      printf("  @");
    } else if (Frame[i] == 4) {
      printf("  =");
    } else if (Frame[i] == 5) {
      printf("  +");
    } else if (Frame[i] == 6) {
      printf("  &");
    } else if (Frame[i] == 7) {
      printf("  0");
    } else if (Frame[i] == 8) {
      printf("  -");
    } else if (Frame[i] == 9) {
      printf("  |");
    } else if (Frame[i] == 10) {
      printf("(=)");
    } else if (Frame[i] == 11) {
      printf(")-(");
    }
  }
  
  
  
}

int badPlayerpos(int playerPos, int Frame[], int player) {

    //remove charicter
    Frame[playerPos] = 0;
    int nextplayerpos = playerPos + 1;
    if (nextplayerpos > 88 ) {
        return 2;
    } else if (Frame[nextplayerpos] != 0) {
        return 1;
    } else {
        return 0;
    }

    

    

}

int enemyColide(int playerPos, int Frame[], int player) {
  if (Frame[playerPos] == 10) {
    return 1;
  } 
}

int move(int playerPos, int Frame[], int player, int direction) {
    if (direction == 1) { //up
    int nextplayerpos = playerPos -20;
    if (Frame[nextplayerpos] == 0) {
      int newplayerpos = playerPos - 20;
      return newplayerpos;
    } else {
      return playerPos;
    } 
    

    } else if (direction == 2) { //up
    int nextplayerpos = playerPos + 20;
    if (Frame[nextplayerpos] == 0) {
      int newplayerpos = playerPos + 20;
      return newplayerpos;

    } else {
      return playerPos;
    }

    }else if (direction == 3) { //up
    int nextplayerpos = playerPos + 1;
    if (Frame[nextplayerpos] == 0) {
      int newplayerpos = playerPos + 1;
      return newplayerpos;

    } else {
      return playerPos;
    }

    }else if (direction == 4) { //up
    int nextplayerpos = playerPos - 1;
    if (Frame[nextplayerpos] == 0) {
      int newplayerpos = playerPos - 1;
      return newplayerpos;

    } else {
      return playerPos;
    }

    }
    

}