#include <stdio.h>

int main()
{
    int inital_amount, days;
    scanf("%d %d", &inital_amount, &days);

    // considering 10 6
    for (int i = 0; i < days; i++)// 1+ (6*2)+6+6=25 instructions
        inital_amount *=2;
    printf("%d", inital_amount);


   // printf("%d", inital_amount<<days);// 1 instruction 
   // 3.2x10^9 Hz
   // 320 can be executable per second 


   
    return 0;
}
