#include <stdio.h>
int main()
{
    float x,y,result;
    printf("Give values x and y\n");
    scanf("%f %f",&x,&y);
    result = (x + y) / (x - y);
    printf("Expression value is: %f \n", result);
    return 0;
}