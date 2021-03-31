#include <stdio.h>
#include<math.h>

int main()
{
   // floor(43245897713958713915.5)-> integer-> 4 byte 
   // double 8 byte 
   int mega= pow(10,3);// 100000
   printf("mega %d \n", mega);
   int giga=pow(10,6);// 1000000
   printf("giga %d \n", giga);
   int tera=pow(10,9);
   printf("tera %d \n", tera);
   long pico=pow(10,12);
   printf("pico %ld \n", pico);

   double Google=pow(10,100); // 10^100-> Google 
   printf("Google %lf \n", Google);

   return 0;
}

