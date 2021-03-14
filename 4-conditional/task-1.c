#include <stdio.h>

int main()
{
    int number;
    printf("Give a number: ");
    scanf("%d", &number);
    // moduls %
    int remainder= number%2;
    remainder==0 ? printf("EVEN") : printf("ODD");
    // logical expression ? do somthing when true  : do somting when false 
    // if (logical expression) {do somthing when true} else {do somting when false}
    return 0;
}

