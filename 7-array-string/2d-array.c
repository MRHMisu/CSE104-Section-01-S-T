#include <stdio.h>

int main()
{

    int row, column;
    row = 3;
    column = 3;
    int numbers[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }
    printf("Printing Matrix\n");
    for (int i = 0; i < row; i++)
    {
        // print each row
        for (int j = 0; j < column; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}