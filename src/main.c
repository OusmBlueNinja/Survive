#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// my custom standard file that contains simple functions like delay
#include "stnd.h"
//file handeler
#include "save-load.h"



int main(int argc, char **argv) {
	printf("Starting\n");
	delay(2);
	int i = 10;
	for ( i = 10; i > 0; i = i - 1 ){    
		system("cls");
   
	  printf("%d   ", i);
		int random_number = rand() % 999999999999999;
		printf("%d", random_number);
	  delay(0.1);
	}
	save(21, 22, 5);
	int posx = read(1);
	int posy = read(2);
	int health = read(3);
	delay(0.5);
	printf("\n%d \n", posx);
	delay(0.5);
	printf("\n%d \n", posy);
	delay(0.5);
	printf("\n%d \n", health);
	
	printf("Printed Value\n");
	
	return 0;
}
