//2) Reverse an array into another array
#include <stdio.h>

int main()
{
    
    int numbers[10]={11,22,33,44,65,46,27,18,19,110};
    // counter-> right-> left (9-0)
    int end=9;
    
    int reverse_numbers[10];// 
    // counter-> left->right (0-9)
    int start=0;
    while (start<=9)
    {
        reverse_numbers[start]=numbers[end];
        // step 1-reverse_numbers[0]=numbers[9]
        // step 2-reverse_numbers[1]=numbers[8]
        // step 3-reverse_numbers[2]=numbers[7]
        start++;
        end--;
        
    }

    for(int i=0; i<10; i++){

        printf("%d ", reverse_numbers[i]);

    }
    


    return 0;
}