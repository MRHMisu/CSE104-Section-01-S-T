//3) Given two 2x2 Matrix A and B. Find A+B and A-B;
#include <stdio.h>

int main()
{
    int A[2][2];
    int B[2][2];
    int A_plus_B[2][2];
    int A_minus_B[2][2];

    printf("Enter Matrix A(2x2): \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &A[i][j]);
   
        }
    }
    printf("\n");
    printf("Enter Matrix B(2x2): \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &B[i][j]);
   
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            A_plus_B[i][j]=A[i][j]+B[i][j]; // A[0][0]+B[0][0]
            A_minus_B[i][j]=A[i][j]-B[i][j];// A[0][0]-B[0][0]
        }
    }

    printf("\n");
    printf(" Matrix A+B: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", A_plus_B[i][j]);
   
        }
        printf("\n");
    }

    printf("\n");
    printf(" Matrix A-B: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", A_minus_B[i][j]);
   
        }
        printf("\n");
    }
    





    return 0;
}