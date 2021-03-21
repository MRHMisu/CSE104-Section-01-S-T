#include <stdio.h>

int main()
{
    int inital_amount, days;
    scanf("%d %d", &inital_amount, &days);
    printf("%d", inital_amount<<days);// executed 1 instruction

    for(int i=0; i<days; i++)// 6 times+ 6 times       
        inital_amount*=2;// 12 times // executed 24 instruction  
    printf("%d\n",inital_amount);

    return 0;
}
