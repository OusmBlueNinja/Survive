#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// my custom standard file that contains simple functions like delay
#include "stnd.h"



int main(int argc, char **argv) {
	printf("Hello world!\n");
	delay(2);
	int i = 10;
	for ( i = 10; i > 0; i = i - 1 ){    
		system("cls");
   
	  printf("%d \n", i);
	  delay(1);
	}
	
	return 0;
}
