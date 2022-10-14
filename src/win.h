#include <stdio.h>
#include <stdlib.h>

void printFrame(int Frame[]) {

  int i;
  int y = 0;
  int DEBUG = 0;
  system("cls");
  for (i = 0; i< 100; i++) {
    if (y == 10) {
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