#include <stdio.h>



int counter()
{
   static int temp = 0;// temp as a local varibale declared here 
   temp++;
   return temp;
   
}

int main()
{
   
   
   int result_1=counter();// 1st calling 
   printf("1st calling %d \n", result_1);

   int result_2=counter();// 2nd calling
   printf("2nd calling %d\n", result_2);

   int result_3=counter();// 3rd calling
   printf("3rd calling %d\n", result_3);

   return 0;
}// temp destroyed here
