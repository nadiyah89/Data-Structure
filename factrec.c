# include <stdio.h>
int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n * factorial(n -1);    
}

int main()
{
    int num;
    printf("Enter number whose factorial is to be calculated\n");
    scanf("%d", &num);

    int f = factorial(num);
    printf("Factorial of %d is: %d\n", num, f );
}