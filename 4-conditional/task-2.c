#include <stdio.h>

int main()
{
    float num_1, num_2;
    char operation;
    scanf("%f %f %c", &num_1, &num_2, &operation);
    switch (operation)
    {
    case '+':
        printf("%f %c %f= %f \n", num_1, operation, num_2, num_1 + num_2);
        break;
    case '-':
        printf("%f %c %f= %f \n", num_1, operation, num_2, num_1 - num_2);
        break;
    case '*':
        printf("%f %c %f= %f \n", num_1, operation, num_2, num_1 * num_2);
         break;
    case '/':
        printf("%f %c %f= %f \n", num_1, operation, num_2, num_1 / num_2);
        break;
    default:
        printf("Wrong Operation \n");
    }

    return 0;
}
