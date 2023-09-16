#include <stdio.h>
//factorial(n) = n * n-1 * n-2 * n-3 * 4 * 2 * 1
//factorial (5) = 5*4*3*2*1
//factorial(1) = 1
//factorial (0) = 1
int factorial (int);

int main()
{
    printf("The value of factorial 6 is %d", factorial(6));
    return 0;
}
int factorial (int n)
    {
        if(n == 1 || n == 0)
        return 1;
    }
    return n * factorial (n-1);
}
