#include <stdio.h>
#define PI 3.1416 // constant (global)
int calculate(int x); // function prototype 
// body can be place after main

int global_varibale=10; 
// global variable, it can be accessed from any function inside this file

int main()
{
   
   printf("Global Varible From Main: %d \n",global_varibale);// print 10;
   global_varibale=30;
   int result=calculate(6);// pass 6 // local varaible
   // result contain=30
   
   printf("%d",result);
   
   
   return 0;
   // result destroyed from memory
}
// when the program terminates 
//  global_varibale is destroyed here

int calculate(int x)// function declaration with body/ scope
{
   
   // x represented 6
   int y = 5;// local varibale
   

   printf("Global Varible From Calculate: %d \n",global_varibale);// print 30;
   return x * y;// (5 * 6)=30
   // here x and y are destroyed from the memory
}
