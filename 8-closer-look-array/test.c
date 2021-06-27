#include <stdio.h>


// pass by value 
int add (int x, int y){
    // x hold a=4
    // y hold b=5
    return x+y;
    // (a=4)+(b=5)
}


// pass by reference
int add_array(int numbers[]){
    int array_length= (int)( sizeof(numbers) / sizeof(numbers[0]));
    int sum=0;
    for(int i=0; i<array_length; i++){
        sum+=numbers[i];
    }
    return sum;
}


int main()
{
    // 1+2+3+...+n=(n(n+1))/2
    int array[10]={1,2,3,4,5,6,7,8,9,10};// 55
    // int-> 4 bytes array memory size=40
    // 40/4=10

    int sum=add_array(array);// pass by reference 
    // array name represents the initial address of the array
    printf("Array Sum: %d", sum);

    return 0;
}