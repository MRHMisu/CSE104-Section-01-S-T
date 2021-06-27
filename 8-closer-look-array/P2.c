//2) Reverse an array into another array
#include <stdio.h>

int main()
{
    int numbers[5]={23,34,54,65,87};
    int reverse_numbers[5];//{87,65,54,34,23}
    // for copying // left->right start++
    // reverse // right-> left end --
   int start=0;
    int end=4;
   while (start<5)
   {
       reverse_numbers[start]=numbers[end];
       // reverse_numbers[0]=numbers[4];
       // reverse_numbers[1]=numbers[3];
       // reverse_numbers[2]=numbers[2];
       // reverse_numbers[3]=numbers[1];
      // reverse_numbers[4]=numbers[0];
       start++;
       end--; 
   }

   
    
    


    return 0;
}