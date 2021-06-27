#include <stdio.h>

int add_array(int elements[], int array_lenght){
    // elements is an array; it takes the reference of an input array
    // elements represnets the numbers
    int sum=0;
    
    // calculate array_length
    for(int i=0; i<array_lenght; i++){
        sum+=elements[i];
    }
    return sum;
}

int main()
{
        int n;
        printf("Enter Array Size : ");
        scanf("%d", &n);
        int numbers[n];
        for (int i=0; i<n;i++){
            scanf("%d", &numbers[i]);

        }
        printf("\n");
        int array_sum=add_array(numbers,n);// pass by referecne of numbers array
        //numbers or array name represents the inital address of  numbers[5]
        printf("Array Sum: %d",array_sum);


    return 0;
}