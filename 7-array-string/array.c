#include <stdio.h>

int main()
{

    // studentID 1->100
    // int s1,s2, s3, s4;
    // declare array for a set of specific data-type variables
    // data_type name [range];
    // calculating the address using the base address, data-type and index
    // element_memory_address= base_address+ (data_type_size* index)
    
    int numbers[100];// array name should be plural
    // counting 5 but range [0,99) exclusing the upper limit
    // values from studentID[0]-> studentID[99]

    for(int i=0; i<100; i++){
        // miss the studentID[0]=??
        numbers[i]=5; 
        // i->1 studentID[1]=1
        // i->2 studentID[2]=2;
        // ...
        // i->99 studentID[99]=100;
        // i->100 studentID[100] does not exist in the memory
    }
    // logic 

    for(int i=0; i<100; i++){
        printf("%d, ",numbers[i]);
        // studentID[0]-> 1
        // studentID[1]-> 2
    }
    
    return 0;
}
