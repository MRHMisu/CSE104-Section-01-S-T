#include <stdio.h>

int main()
{
    int numbers[10];
    printf("Give 10 numbers: \n");
    for(int i=0; i<10; i++){
        scanf("%d", &numbers[i]);
        // %d, address &variable_name
    }
    printf("Input tacking done\n");
    for(int i=0; i<=10; i++){

        if((numbers[i]%2)==0)
        printf("Even: %d \n", numbers[i]);
        else 
        printf("Odd: %d \n", numbers[i]);
    }
    numbers[10]= 45; // numbers[10] does not exist
    // Index out of bound
    // numbers[10]->numbers[0]-> numbers[9] 
    
     
    return 0;
}