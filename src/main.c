#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// my custom standard file that contains simple functions like delay
#include "stnd.h"



int main(int argc, char **argv) {
	printf("Starting\n");
	delay(2);
	int i = 10;
	for ( i = 10; i > 0; i = i - 1 ){    
		system("cls");
   
	  printf("%d   ", i);
		int random_number = rand() % 9999;
		printf("%d", random_number);
	  delay(1);
	}
	
	return 0;
}
