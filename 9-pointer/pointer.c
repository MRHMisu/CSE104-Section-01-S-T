#include <stdio.h>


int SUM=0;// global 
int *  add_array(int * numbers, int length){
        
        for(int i=0; i<length; i++)
            SUM+=numbers[i];
        printf("Passing address of SUM %x: \n", &SUM);
        // return SUM;// return 15
       return &SUM;// return adrres
        // return address instead of a value
}
int main()
{   

    int array[5]={1,2,3,4,5};
    int array_length=5;

    int * array_base_address=array;
    // store the array base address

    int * return_sum=add_array(array_base_address, array_length);// pass by reference 
    printf("Return SUM : %x\n",  return_sum);// print address of return_sum
    printf("Return SUM Value : %d\n", * return_sum);// print value of return_sum
    
    return 0;
}