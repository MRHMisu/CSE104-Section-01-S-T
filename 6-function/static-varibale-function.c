#include <stdio.h>
# define PI 3.1436 // it can be globally accessed but cannot be mordified 

int pi=3.1436;//it can be globally accessed and be mordified 

int calculate()
{
    static int temp = 0;// static  variable
   // declared within the function and can use inside the function block
   // acts as local variable 
   temp++;// temp=1-> temp=2;
   return temp;
   // but  temp is not destroyed from memory 
   // as it stored in the memory till the program termination
   // acts as global variable 
}

int main()
{

   int result_after_1st_call = calculate();
   printf("result_after_1st_call: %d \n", result_after_1st_call);
   // temp 1
   int result_after_2nd_call = calculate();
   printf("result_after_2nd_call : %d \n", result_after_2nd_call);
   return 0;
}
// here temp is destroyed from memory as it is static 
