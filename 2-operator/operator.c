#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Give Two Number seperated by space or enter: ");
    scanf("%d %d", &num1, &num2);
    // addition result
    int addition_result=num1+num2;
    printf("%d + %d = %d \n",num1,num2, addition_result);
    // subtraction result
    int subtraction_result=num1-num2;
    printf("%d - %d = %d \n",num1,num2, subtraction_result);
    // multiplication result
    int multiplication_result= num1*num2;
    printf("%d * %d = %d \n",num1,num2, multiplication_result);
    // division result in factional value
    float division_result= num1/num2;
    printf("%d / %d = %f \n",num1,num2, division_result);
    // division result in whole number
    int division_result_whole= num1/num2;
    printf("%d / %d = %d \n",num1,num2, division_result_whole);
    // modulus result
    int remainder=num1%num2;
    printf("%d %% %d = %d \n",num1,num2, remainder);
   
return 0;

}