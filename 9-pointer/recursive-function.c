#include <stdio.h>

int get_factorial(int n){
    int result=1;
    for(int i=1; i<=n; i++){
        result*=i;
    }
    return result;
}

// 5!-> 4! x5
// 4!-> 3! x4
// 3!-> 2! x3
// 2!-> 1! x2
// 1!-> 1  x1 // base condition

// base condition -> in which condition the recursion stops
// recursive condition-> leads to the base condtion

int factorial(int n){// 5
    if(n==1)
        return 1;
        // (n-1)! * n // (5-1)! * 5-> (4! * 5)
    else 
        return factorial(n-1) * n;
}
/*

    factorial(5)=120
        return 24 * 5 = 120
                return 6 * 4 =24
                    return 2 * 3 =6
                         return 1 * 2=2
                            return 1;



*/




int main()
{   

    int number=5;
    int factorialofNumber=factorial(number);
    printf("Factorial of %d : %d \n",number,  factorialofNumber);

    
    return 0;
}