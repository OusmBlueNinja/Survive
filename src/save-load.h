#include <stdio.h>

void save(int posx, int posy, int health) {
   int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("data/posx","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   num = posx;

   fprintf(fptr,"%d",num);
   fclose(fptr);
   fptr = fopen("data/posy","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   num = posy;

   fprintf(fptr,"%d",num);
   fclose(fptr);
   fptr = fopen("data/health","w");

   if(fptr == NULL)
   {
      printf("[Error]");   
      exit(1);             
   }

   num = health;

   fprintf(fptr,"%d",num);
   fclose(fptr);
}

int read(int file) {
   
   if ( file == 1 ) {
    FILE *fptr;

   if ((fptr = fopen("data/posx","r")) == NULL){
       printf("\n[Error] opening file posx \n");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   int posx;
   fscanf(fptr,"%d", &posx);


   //printf("Value of n=%d", num);
   fclose(fptr); 

   return posx;
   } else if (file == 2) {
    FILE *fptr;

   if ((fptr = fopen("data/posy","r")) == NULL){
       printf("\n[Error] opening file posy\n");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   int posy;
   fscanf(fptr,"%d", &posy);


   //printf("Value of n=%d", num);
   fclose(fptr); 

   return posy;
   } else if (file == 3) {
    FILE *fptr;

   if ((fptr = fopen("data/health","r")) == NULL){
       printf("\n[Error] opening file health\n");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   int health;
   fscanf(fptr,"%d", &health);


   //printf("Value of n=%d", num);
   fclose(fptr); 

   return health;
   }

   
}