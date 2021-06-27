#include <stdio.h>

int main()
{
   int row=3;
   int column=3;

   int image_1[row][column];
   int image_2[row][column];

    printf("Enter 1st Image: \n");
   for(int i=0; i<row; i++){
       for(int j=0; j<column; j++){
           scanf("%d", & image_1[i][j]);
       }
   }

   printf("Enter 2nd Image: \n");
   for(int i=0; i<row; i++){
       for(int j=0; j<column; j++){
           scanf("%d", & image_2[i][j]);
       }
   }
   printf("\n");
   for(int i=0; i<row; i++){
       for(int j=0; j<column; j++){
           if(image_1[i][j]!=image_2[i][j]){
            printf("Different");
            // terminate 
            return 0;
           }
       }
   }
    printf("Identical");

   


    return 0;  
}