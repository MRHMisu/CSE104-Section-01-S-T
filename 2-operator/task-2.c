#include <stdio.h>
int main()
{
    //((a + b / c * d - e) * (f - g))
    float a, b, c, d, e, f, g;
    printf("Give values for ((a + b / c * d - e) * (f - g)) \n");
    scanf("%f %f % %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    //int result = ((a + b / c * d - e) * (f - g));
    //printf("Expression value is: %d \n", result);
    float result = b / c;
    printf("%f / %f = %f \n", b,c,result);
    return 0;
}