#include <stdio.h>

int SUM;
int * add (int * x, int * y){

    SUM= *x + *y;
    return &SUM;
}

int main()
{   
    int X=5;
    int Y=10;
    int * pointer_of_SUM=add(&X,&Y);
    printf("Value of SUM %d",* pointer_of_SUM);

    return 0;    
}